//
// Created by Addison on 9/11/2021.
//

#ifndef CS236_PROJECT_1_COMMAAUTOMATON_H
#define CS236_PROJECT_1_COMMAAUTOMATON_H
#include "Automaton.h"
#include <string>

class CommaAutomaton : public Automaton
{
private:

public:
    CommaAutomaton() : Automaton(TokenType::COMMA) {}
    void S0(const std::string& input) override {
        if (input[index] == ',') {
            inputRead = 1;
        }
        else {
            Serr();
        }
    };

   //void S0(const std::string& input);
};

#endif //CS236_PROJECT_1_COMMAAUTOMATON_H
