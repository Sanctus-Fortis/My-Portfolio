//
// Created by Addison on 9/12/2021.
//

#ifndef CS236_PROJECT_1_STRINGAUTOMATA_H
#define CS236_PROJECT_1_STRINGAUTOMATA_H
#include "Automaton.h"

class StringAutomata : public Automaton {
public:
    StringAutomata() : Automaton(TokenType::STRING) {}
    void S0(const std::string& input) override {
        if (input[index] == '\'') {
            ++index;
            inputRead = 1;
            S1(input);
        } else {
            Serr();
        }
    }
private:
    void S1(const std::string& input) {
        if (index == input.size() - 1) {
            Serr();
        }
        else if (input[index] != ('\'')) {
            if (input[index] == '\n') {
                ++newLines;
            }
            ++index;
            ++inputRead;
            S1(input);
        }
        else {
            ++index;
            ++inputRead;
            S2(input);
        }
    }
    void S2(const std::string& input) {
        if (input[index] == '\'') {
            ++index;
            ++inputRead;
            S1(input);
        }
        else {

        }
    }
};


#endif //CS236_PROJECT_1_STRINGAUTOMATA_H
