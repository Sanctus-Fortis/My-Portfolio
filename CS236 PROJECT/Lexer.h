#ifndef LEXER_H
#define LEXER_H
#include <vector>
#include "Automaton.h"
#include "Token.h"

class Lexer
{
private:
    std::vector<Automaton*> automata;
    std::vector<Token*> tokens;
    string fileContents;
    int lineNum = 0;
    //int inputRead = 0;


    void CreateAutomata();

    // TODO: add any other private methods here (if needed)

public:
    void DeleteAutomata();
    Lexer();
    Lexer(string fileContents) {
        this->fileContents = fileContents;
    }
    ~Lexer();
    void Run(std::string& input);

    string toString();

    std::vector<Token*> getVector() {
        return this-> tokens;
    }
    
    // TODO: add other public methods here

};

#endif // LEXER_H

