//
// Created by Addison on 9/12/2021.
//

#ifndef CS236_PROJECT_1_QUESTIONAUTOMATA_H
#define CS236_PROJECT_1_QUESTIONAUTOMATA_H
#include "Automaton.h"

class QuestionAutomata : public Automaton {
public:
    QuestionAutomata() : Automaton(TokenType::Q_MARK) {}
    void S0(const std::string& input) override {
        if (input[index] == '?') {
            inputRead = 1;
        }
        else {
            Serr();
        }
    };
private:

};


#endif //CS236_PROJECT_1_QUESTIONAUTOMATA_H
