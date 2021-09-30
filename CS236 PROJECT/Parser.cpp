#include "Parser.h"
#include "Token.h"
#include <set>

using namespace std;

void Parser::parse() {

	parseDatalogProgram();	

}

void Parser::parseDatalogProgram() {																					//SCHEMES COLON scheme schemeList FACTS COLON factList RULES COLON ruleList QUERIES COLON query queryList EOF
	vector<Predicate> schemes;
	vector<Predicate> facts;
	vector<Predicate> queries;
	//vector<Predicate> temp;
	vector<Rule> rules;
	matchTerminal(tokList.at(0), TokenType::SCHEMES);
	matchTerminal(tokList.at(0), TokenType::COLON);
	schemes.push_back(parseScheme());
	parseSchemeList(schemes);
	myProgram.setSchemes(schemes);
	matchTerminal(tokList.at(0), TokenType::FACTS);
	matchTerminal(tokList.at(0), TokenType::COLON);
	parseFactList(facts);
	myProgram.setFacts(facts);
	matchTerminal(tokList.at(0), TokenType::RULES);
	matchTerminal(tokList.at(0), TokenType::COLON);
	parseRuleList(rules);
	myProgram.setRules(rules);
	matchTerminal(tokList.at(0), TokenType::QUERIES);
	matchTerminal(tokList.at(0), TokenType::COLON);
	queries.push_back(parseQuery());
	parseQueryList(queries);
	myProgram.setQueries(queries);
	matchTerminal(tokList.at(0), TokenType::END_OF_FILE);
	myProgram.createDomain();
}

vector<Predicate> Parser::parseSchemeList(vector<Predicate>& temp) {
	if (tokList.at(0)->getToken() == TokenType::FACTS) {

	}
	else {
		temp.push_back(parseScheme());
		parseSchemeList(temp);
	}
	return temp;
}

vector<Predicate> Parser::parseFactList(vector<Predicate>& temp) {
	if (tokList.at(0)->getToken() == TokenType::RULES) {

	}
	else {
		temp.push_back(parseFact());
		parseFactList(temp);
	}
	return temp;
}

vector<Rule> Parser::parseRuleList(vector<Rule>& temp) {
	if (tokList.at(0)->getToken() == TokenType::QUERIES) {

	}
	else {
		temp.push_back(parseRule());
		parseRuleList(temp);
	}
	return temp;
}

vector<Predicate> Parser::parseQueryList(vector<Predicate>& temp) {
	if (tokList.at(0)->getToken() != TokenType::END_OF_FILE) {
		temp.push_back(parseQuery());
		parseQueryList(temp);
	}
	else {
	}
	return temp;
}

Predicate Parser::parseFact() {																							// ID LEFT_PAREN STRING stringList RIGHT_PAREN PERIOD
	Predicate returnPred;
	vector<Parameter> content;
	Parameter temp;
	returnPred.setName(matchTerminal(tokList.at(0), TokenType::ID));
	matchTerminal(tokList.at(0), TokenType::LEFT_PAREN);
	temp.setContent(matchTerminal(tokList.at(0), TokenType::STRING));			// content, should return the contents of the token
	content.push_back(temp);
	parseStringList(content);										// pass vector in by reference, vector is edited by functions further down in the recursion
	matchTerminal(tokList.at(0), TokenType::RIGHT_PAREN);
	matchTerminal(tokList.at(0), TokenType::PERIOD);
	returnPred.setContent(content);
	return returnPred;
}

Predicate Parser::parseScheme() {																						// ID LEFT_PAREN ID idList RIGHT_PAREN
	Predicate returnPred;
	vector<Parameter> content;
	Parameter temp;
	returnPred.setName(matchTerminal(tokList.at(0), TokenType::ID));
	matchTerminal(tokList.at(0), TokenType::LEFT_PAREN);
	temp.setContent(matchTerminal(tokList.at(0), TokenType::ID));
	content.push_back(temp);
	parseIdList(content);
	matchTerminal(tokList.at(0), TokenType::RIGHT_PAREN);
	returnPred.setContent(content);
	return returnPred;
}

Rule Parser::parseRule() {																			// headPredicate COLON_DASH predicate predicateList PERIOD
	Rule returnRule;
	vector<Predicate> content;
	Predicate temp;
	returnRule.setHeadPredicate(parseHeadPredicate());
	matchTerminal(tokList.at(0), TokenType::COLON_DASH);
	temp = parsePredicate();
	content.push_back(temp);
	parsePredicateList(content);
	matchTerminal(tokList.at(0), TokenType::PERIOD);
	returnRule.setContent(content);
	return returnRule;
}

Predicate Parser::parseQuery() {																		// predicate Q_MARK
	Predicate temp;
	temp = parsePredicate();
	matchTerminal(tokList.at(0), TokenType::Q_MARK);
	return temp;
}

Predicate Parser::parseHeadPredicate() {																// ID LEFT_PAREN ID idList RIGHT_PAREN
	Predicate returnPred;
	Parameter tempTwo;
	vector<Parameter> content;
	string temp = "";
	temp += (matchTerminal(tokList.at(0), TokenType::ID));
	matchTerminal(tokList.at(0), TokenType::LEFT_PAREN);
	tempTwo.setContent(matchTerminal(tokList.at(0), TokenType::ID));
	content.push_back(tempTwo);
	parseIdList(content);
	matchTerminal(tokList.at(0), TokenType::RIGHT_PAREN);
	returnPred.setContent(content);
	returnPred.setName(temp);
	return returnPred;
}

Predicate Parser::parsePredicate() {																		// ID LEFT_PAREN parameter parameterList RIGHT_PAREN
	Predicate returnPred;
	vector<Parameter> content;
	returnPred.setName(matchTerminal(tokList.at(0), TokenType::ID));
	matchTerminal(tokList.at(0), TokenType::LEFT_PAREN);
	content.push_back(parseParameter());
	parseParameterList(content);
	matchTerminal(tokList.at(0), TokenType::RIGHT_PAREN);
	returnPred.setContent(content);
	return returnPred;
}

void Parser::parsePredicateList(vector<Predicate>& content) {												// COMMA predicate predicateList | lambda
	if (tokList.at(0)->getToken() == TokenType::COMMA) {
		Predicate temp;
		matchTerminal(tokList.at(0), TokenType::COMMA);
		temp = parsePredicate();
		content.push_back(temp);
		parsePredicateList(content);
	}
	else {
		//lambda
	}
}

void Parser::parseParameterList(vector<Parameter>& content) {												// COMMA parameter parameterList | lambda
	if (tokList.at(0)->getToken() == TokenType::COMMA) {
		matchTerminal(tokList.at(0), TokenType::COMMA);
		content.push_back(parseParameter());
		parseParameterList(content);
	}
	else {
		//lambda
	}
}

void Parser::parseStringList(vector<Parameter>& content) {													// COMMA STRING stringList | lambda
	if (tokList.at(0)->getToken() == TokenType::COMMA) {
		matchTerminal(tokList.at(0), TokenType::COMMA);
		PlainParameter temp;
		temp.setContent(matchTerminal(tokList.at(0), TokenType::STRING));
		content.push_back(temp);
		parseStringList(content);
	}
	else {
		//lambda
	}
}

void Parser::parseIdList(vector<Parameter>& content) {														// COMMA ID idList | lambda
	if (tokList.at(0)->getToken() == TokenType::COMMA) {
		matchTerminal(tokList.at(0), TokenType::COMMA);
		PlainParameter temp;
		temp.setContent(matchTerminal(tokList.at(0), TokenType::ID));
		content.push_back(temp);
		parseIdList(content);
	}
	else {
		//lambda
	}
}

Parameter Parser::parseParameter() {																		// STRING | ID | expression
	Parameter temp;
	if (tokList.at(0)->getToken() == TokenType::STRING) {
		temp.setContent(matchTerminal(tokList.at(0), TokenType::STRING));
	}
	else if (tokList.at(0)->getToken() == TokenType::ID) {
		temp.setContent(matchTerminal(tokList.at(0), TokenType::ID));
	}
	else {
		temp.setContent(parseExpression().toString());
	}
	return temp;
}

Expression Parser::parseExpression() {																		// LEFT_PAREN parameter operator parameter RIGHT_PAREN
	Expression temp;
	matchTerminal(tokList.at(0), TokenType::LEFT_PAREN);
	temp.setParamOne(parseParameter());
	temp.setOperator(parseOperator());
	temp.setParamTwo(parseParameter());
	matchTerminal(tokList.at(0), TokenType::RIGHT_PAREN);
	return temp;
}

string Parser::parseOperator() {																			// ADD | MULTIPLY
	string temp;
	if (tokList.at(0)->getToken() == TokenType::ADD) {
		(matchTerminal(tokList.at(0), TokenType::ADD));
		temp = "+";
	}
	else if (tokList.at(0)->getToken() == TokenType::MULTIPLY) {
		(matchTerminal(tokList.at(0), TokenType::MULTIPLY));
		temp = "*";
	}
	else {
		baseball = tokList.at(0);
		throw baseball;
	}
	return temp;
}

string Parser::matchTerminal(Token* actual, TokenType expected) {											// Checks if the expected token matches what is actually there.  If not, it throws an exception.
	string temp = tokList.at(0)->getValue();
	if (tokList.at(0)->getToken() == expected) {
		tokList.erase(tokList.begin());
		if (expected != TokenType::END_OF_FILE) {
			return temp;
		}
		else {
			return "";
		}
	}
	else {
		baseball = tokList.front();
		throw baseball;
	}
}


























































// Have I mentioned my burning love and passion for recursive functions? Such an elegant solution to so many complex problems! I accidentally used them in cs 142 before learning about them, but I didn't understand
// the wonderful world I was brushing wtih the tips of my bleeding programmer fingers. Every time I see an opportunity to recurse I start shaking with glee and my fingers quickly pound out the beautiful lines
// required to make the world worth living in. While compiling I tremble with anticipation and then ecstasy as my code fulfills it's purpose by calling back to the same six lines of code over and over again.  
// I call my Father, a battle hardened software engineer and tell him of my victory over complexity, basking in the glorious light of my monitor as it reflects the perfect code onto my eyes.  There is truly
// no greater joy than a recursive solution to a problem.
