//
// Created by Addison on 9/11/2021.
//
#include "Automaton.h"
#ifndef CS236_PROJECT_1_COMMAAUTOMATON_H
#define CS236_PROJECT_1_COMMAAUTOMATON_H

class CommaAutomaton : public Automaton
{
public:
    CommaAutomaton() : Automaton(TokenType::COMMA) {}  // Call the base constructor

    void S0(const std::string& input);
};

#endif //CS236_PROJECT_1_COMMAAUTOMATON_H
