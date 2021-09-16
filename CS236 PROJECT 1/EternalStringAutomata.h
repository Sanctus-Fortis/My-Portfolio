//
// Created by Addison on 9/12/2021.
//

#ifndef CS236_PROJECT_1_ETERNALSTRINGAUTOMATA_H
#define CS236_PROJECT_1_ETERNALSTRINGAUTOMATA_H
#include "Automaton.h"

class EternalStringAutomata : public Automaton {
public:
    EternalStringAutomata() : Automaton(TokenType::UNDEFINED) {}
    void S0(const std::string& input) override {
        if (input[index] == '\'') {
            inputRead = 1;
            ++index;
            S1(input);
        }
        else {
            Serr();
        }
    };
private:
    void S1(const std::string& input) {
        if (input[index] != '\'' && index != input.size() - 1) {
            if (input[index] == '\n') {
                ++newLines;
            }
            ++inputRead;
            ++index;
            S1(input);
        }
        else if  (input[index] == '\'') {
            ++inputRead;
            ++index;
            if (input[index] == '\'') {
                ++inputRead;
                ++index;
                S1(input);
            }
            else {
                Serr();
            }
        }
    }

};


#endif //CS236_PROJECT_1_ETERNALSTRINGAUTOMATA_H
