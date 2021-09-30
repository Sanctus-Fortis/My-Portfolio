//
// Created by Addison on 9/12/2021.
//

#ifndef CS236_PROJECT_1_LEFTPARENAUTOMATA_H
#define CS236_PROJECT_1_LEFTPARENAUTOMATA_H
#include "Automaton.h"

class LeftParenAutomata : public Automaton {
public:
    LeftParenAutomata() : Automaton(TokenType::LEFT_PAREN) {}
    void S0(const std::string& input) override {
        if (input[index] == '(') {
            inputRead = 1;
        }
        else {
            Serr();
        }
    };
private:

};


#endif //CS236_PROJECT_1_LEFTPARENAUTOMATA_H
