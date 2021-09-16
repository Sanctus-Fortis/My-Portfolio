#ifndef AUTOMATON_H
#define AUTOMATON_H
#include "Token.h"

class Automaton
{
protected:
    int newLines = 0;
    long unsigned int index = 0;
    TokenType type;
    int inputRead;

public:
    // Default constructor -- since we have a constructor that takes a parameter,
    //   the compiler will autogenerate a default constructor if not explicit.
    Automaton() : Automaton(TokenType::UNDEFINED) {}

    Automaton(TokenType type) { this->type = type; }

    int getInputRead() {
        return inputRead;
    }
    void setInputRead(int i) {
        inputRead = i;
    }
    void setIndex(int i) {
        index = i;
    }

    // Start the automaton and return the number of characters read
    //   read == 0 indicates the input was rejected
    //   read  > 0 indicates the input was accepted

    int getNewLines() {
        return newLines;
    }

    // Every subclass must define this method
    virtual void S0(const std::string& input) = 0;

    void Serr() {
        // Indicate the input was rejected
        inputRead = 0;
    }

    virtual Token* CreateToken(std::string input, int lineNumber) { return new Token(type, input, lineNumber); }
    virtual Token* CreateUndefined(std::string input, int lineNumber) { return new Token(TokenType::UNDEFINED, input, lineNumber); }

};

#endif // AUTOMATON_H

