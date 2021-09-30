#include <sstream>
#include <iostream>
#include "Lexer.h"
#include "ColonAutomaton.h"
#include "ColonDashAutomaton.h"
#include "CommaAutomaton.h"
#include "MultiplyAutomata.h"
#include "IdAutomata.h"
#include "AddAutomata.h"
#include "CommentAutomata.h"
#include "EternalCommentAutomata.h"
#include "EternalStringAutomata.h"
#include "FactsAutomata.h"
#include "LeftParenAutomata.h"
#include "RightParenAutomata.h"
#include "PeriodAutomata.h"
#include "QueriesAutomata.h"
#include "QuestionAutomata.h"
#include "RulesAutomata.h"
#include "SchemesAutomata.h"
#include "StringAutomata.h"

Lexer::Lexer() {
    CreateAutomata();
}

Lexer::~Lexer() {
    for (long unsigned int i = 0; i < tokens.size(); ++i) {
        delete tokens.at(i);
    }
    for (long unsigned int i = 0; i < automata.size(); ++i) {
        //delete automata.at(i);
    }
}

void Lexer::CreateAutomata() {
    automata.push_back(new FactsAutomata());
    automata.push_back(new QueriesAutomata());
    automata.push_back(new RulesAutomata());
    automata.push_back(new SchemesAutomata());
    automata.push_back(new CommentAutomata());
    automata.push_back(new StringAutomata());
    automata.push_back(new IdAutomata());
    automata.push_back(new EternalCommentAutomata());
    automata.push_back(new EternalStringAutomata());
    automata.push_back(new PeriodAutomata());
    automata.push_back(new AddAutomata());
    automata.push_back(new LeftParenAutomata());
    automata.push_back(new RightParenAutomata());
    automata.push_back(new MultiplyAutomata());
    automata.push_back(new QuestionAutomata());
    automata.push_back(new ColonAutomaton());
    automata.push_back(new ColonDashAutomaton());
    automata.push_back(new CommaAutomaton());
}
void Lexer::DeleteAutomata() {

}

string Lexer::toString() {
        string output;
        for(long unsigned int i = 0; i < tokens.size(); ++i) {
            output += tokens.at(i)->toString();
        }
        return output;
}

void Lexer::Run(std::string& input) {
    lineNum = 1;
    int maxRead = 0;
    int maxNewLines = 1;
    Automaton* maxMachine;
    while(input.size() > 1) {
        maxRead = 0;
        maxMachine = automata.at(0);
        for (long unsigned int i = 0; i < automata.size(); ++i) {
            automata.at(i)->S0(input);
            if (automata.at(i)->getInputRead() > maxRead) {
                maxRead = automata.at(i)->getInputRead();
                maxMachine = automata.at(i);
            }
        }
        if (maxRead > 0) {
            string inString = input.substr(0, maxRead);
            Token* newToken = maxMachine->CreateToken(inString, maxNewLines);
            tokens.push_back(newToken);
        }
        else {
            if (isspace(input.at(0)) && input.at(0) != '\n') {
                ++maxRead;
            }
            else if (input.at(0) == '\n') {
                ++maxRead;
                ++maxNewLines;
            }
            else {
                if ((input.substr(0, 1)) == "\'") {
                    string inString = input;
                    Token* newToken = maxMachine->CreateUndefined(input, maxNewLines);
                    tokens.push_back(newToken);
                    input.clear();
                }
                else if ((input.substr(0, 1)) == "#") {
                    string inString = input;
                    Token* newToken = maxMachine->CreateUndefined(input, maxNewLines);
                    tokens.push_back(newToken);
                    input.clear();
                }
                else {
                    ++maxRead;
                    string inString = input.substr(0, maxRead);
                    Token* newToken = maxMachine->CreateUndefined(inString, maxNewLines);
                    tokens.push_back(newToken);
                }
            }
        }
        input.erase(0, maxRead);
        for (long unsigned int i = 0; i < automata.size(); ++i) {
            automata.at(i)->setIndex(0);
        }
        maxNewLines += maxMachine->getNewLines();
        for (long unsigned int i = 0; i < automata.size(); ++i) {
            automata.at(i)->setNewLines(0);
        }
    }
    string output = "";
    int toTokens = 0;
    for (unsigned int i = 0; i < tokens.size(); ++i)
    {
        output += tokens.at(i)->toString();
        toTokens++;
    }
    stringstream out;
    //out << "(EOF,\"\"," << (maxNewLines) << ')' << '\n';
    //out << "Total Tokens = " << toTokens + 1 << '\n';
    tokens.push_back(new Token(TokenType::END_OF_FILE, "", maxNewLines));
    //output += out.str();
    //for (long unsigned int i = 0; i < tokens.size(); ++i) {
    //    cout << tokens.at(i)->toString();
    //}
    //cout << "Total Tokens = " << tokens.size();
}
