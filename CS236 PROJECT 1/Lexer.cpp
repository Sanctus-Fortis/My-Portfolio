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
    automata.push_back(new StringAutomata());
    automata.push_back(new IdAutomata());
    automata.push_back(new CommentAutomata());
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
    }
    string output = "";
    int toTokens = 0;
    for (unsigned int i = 0; i < tokens.size(); ++i)
    {
        output += tokens.at(i)->toString();
        toTokens++;
    }
    stringstream out;
    out << "(EOF,\"\"," << (maxNewLines) << ')' << '\n';
    out << "Total Tokens = " << toTokens + 1 << '\n';
    tokens.push_back(new Token(TokenType::END_OF_FILE, "", maxNewLines));
    output += out.str();
    for (long unsigned int i = 0; i < tokens.size(); ++i) {
        cout << tokens.at(i)->toString();
    }
    cout << "Total Tokens = " << tokens.size();
    /*
    set lineNumber to 1
    // While there are more characters to tokenize
    loop while input.size() > 0 {
        set maxRead to 0
        set maxAutomaton to the first automaton in automata
        // Here is the "Parallel" part of the algorithm
        //   Each automaton runs with the same input
        foreach automaton in automata {
            inputRead = automaton.Start(input)
            if (inputRead > maxRead) {
                set maxRead to inputRead
                set maxAutomaton to automaton
            }
        }
        // Here is the "Max" part of the algorithm
        if maxRead > 0 {
            set newToken to maxAutomaton.CreateToken(...)
                increment lineNumber by maxAutomaton.NewLinesRead()
                add newToken to collection of all tokens
        }
        // No automaton accepted input
        // Create single character undefined token
        else {
            set maxRead to 1
                set newToken to a  new undefined Token
                (with first character of input)
                add newToken to collection of all tokens
        }
        // Update `input` by removing characters read to create Token
        remove maxRead characters from input
    }
    add end of file token to all tokens
    */
}
