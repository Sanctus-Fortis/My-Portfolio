//
// Created by Addison on 9/12/2021.
//

#ifndef CS236_PROJECT_1_ADDAUTOMATA_H
#define CS236_PROJECT_1_ADDAUTOMATA_H
#include "Automaton.h"

class AddAutomata : public Automaton {
public:
    AddAutomata() : Automaton(TokenType::ADD) {}
    void S0(const std::string& input) override {
        if (inputRead == '+') {
            ++inputRead = 1;
        }
        else {
            Serr();
        }
    };
private:

};


#endif //CS236_PROJECT_1_ADDAUTOMATA_H
