//
// Created by Addison on 9/12/2021.
//

#ifndef CS236_PROJECT_1_IDAUTOMATA_H
#define CS236_PROJECT_1_IDAUTOMATA_H
#include "Automaton.h"


class IdAutomata : public Automaton {
public:
    IdAutomata() : Automaton(TokenType::ID) {}
    void S0(const std::string& input) override {
        if (static_cast<int>(input[index] > 0)) {
            if (isalpha(input[index])) {
                ++index;
                inputRead = 1;
                S1(input);
            }
            else {
                Serr();
            }
        }
        else {
            Serr();
        }
    };
private:
    void S1(const std::string& input) {
        if (isalnum(input[index])) {
            ++index;
            ++inputRead;
            S1(input);
        }
    }
};


#endif //CS236_PROJECT_1_IDAUTOMATA_H
