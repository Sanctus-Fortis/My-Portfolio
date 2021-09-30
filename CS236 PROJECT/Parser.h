#ifndef PARSE_H
#define PARSE_H
#include <vector>
#include <set>
#include <string>
#include <sstream>
#include "Token.h"
#include "DatalogProgram.h"
#include "Rule.h"
#include "Predicate.h"
#include "Expression.h"
#include "PlainParameter.h"

using namespace std;

class Parser	//Recursive decent parser
{
public:

	void clearComment() {
		for (unsigned int i = 0; i < tokList.size(); i++) {
			while (tokList.at(i)->getToken() == TokenType::COMMENT) {
                if (tokList.at(i)->getToken() == TokenType::END_OF_FILE) {
                    return;
                }
				tokList.erase(tokList.begin() + i);
			}
		}
	}

	Parser() {	}
	Parser(vector<Token*> tokList) { this->tokList = tokList; }					    // Used in main to bring the Lexer's token vector into the parser
	void parse();																    // Parsing funtion called in main

	void parseDatalogProgram();
	DatalogProgram getDatalog() {
		return myProgram;
	}

	vector<Predicate> parseSchemeList(vector<Predicate>& temp);					    // scheme schemeList | lambda
	vector<Predicate> parseFactList(vector<Predicate>& temp);					    // fact factList | lambda
	vector<Rule> parseRuleList(vector<Rule>& temp);									// rule ruleList | lambda
	vector<Predicate> parseQueryList(vector<Predicate>& temp);						// query queryList | lambda

	Predicate parseFact();															// ID LEFT_PAREN STRING stringList RIGHT_PAREN PERIOD
	Predicate parseScheme();														// ID LEFT_PAREN ID idList RIGHT_PAREN
	Rule parseRule();																// headPredicate COLON_DASH predicate predicateList PERIOD
	Predicate parseQuery();															// predicate Q_MARK

	Predicate parseHeadPredicate();													// ID LEFT_PAREN ID idList RIGHT_PAREN
	Predicate parsePredicate();														// ID LEFT_PAREN parameter parameterList RIGHT_PAREN

	void parsePredicateList(vector<Predicate>& content);							// COMMA predicate predicateList | lambda
	void parseParameterList(vector<Parameter>& content);							// COMMA parameter parameterList | lambda
	void parseStringList(vector<Parameter>& content);								// COMMA STRING stringList | lambda
	void parseIdList(vector<Parameter>& content);									// COMMA ID idList | lambda

	Parameter parseParameter();														// STRING | ID | expression
	Expression parseExpression();													// LEFT_PAREN parameter operator parameter RIGHT_PAREN
	string parseOperator();															// ADD | MULTIPLY
	
	string matchTerminal(Token* actual, TokenType expected);						//Take in next token and expected token, compares and returns based on match or not

	void toString() {
		myProgram.toString();
	}
private:
	vector<Token*> tokList;
	int tokListLocation = 0;
	Token* baseball;

	DatalogProgram myProgram;

	//Data structure vectors
	

};
#endif

