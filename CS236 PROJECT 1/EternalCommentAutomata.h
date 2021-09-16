//
// Created by Addison on 9/12/2021.
//

#ifndef CS236_PROJECT_1_ETERNALCOMMENTAUTOMATA_H
#define CS236_PROJECT_1_ETERNALCOMMENTAUTOMATA_H
#include "Automaton.h"

class EternalCommentAutomata : public Automaton {
public:
    EternalCommentAutomata() : Automaton(TokenType::UNDEFINED) {}
    void S0(const std::string& input) override {
        if (input[index] == '#') {
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
        if (input[index] == '|') {
            ++inputRead;
            ++index;
            S2(input);
        }
    }
    void S2(const std::string& input) {
        if (input[index] == '|' && input[index+1] == '#') {
            Serr();
        }
        else if (index != input.size()) {
            if (input[index] == '\n') {
                ++newLines;
            }
            ++inputRead;
            ++index;
            S2(input);
        }
    }
};


#endif //CS236_PROJECT_1_ETERNALCOMMENTAUTOMATA_H
