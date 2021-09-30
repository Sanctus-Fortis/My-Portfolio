//
// Created by Addison on 9/12/2021.
//

#ifndef CS236_PROJECT_1_RULESAUTOMATA_H
#define CS236_PROJECT_1_RULESAUTOMATA_H
#include "Automaton.h"

class RulesAutomata : public Automaton {
public:
    RulesAutomata() : Automaton(TokenType::RULES) {}
    void S0(const std::string& input) override {
        if (input[index] == 'R') {
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
        if (input[index] == 'u') {
            ++inputRead;
            ++index;
            S2(input);
        }
        else {
            Serr();
        }
    };
    void S2(const std::string& input) {
        if (input[index] == 'l') {
            ++inputRead;
            ++index;
            S3(input);
        }
        else {
            Serr();
        }
    };
    void S3(const std::string& input)  {
        if (input[index] == 'e') {
            ++inputRead;
            ++index;
            S4(input);
        }
        else {
            Serr();
        }
    };
    void S4(const std::string& input)  {
        if (input[index] == 's') {
            ++inputRead;
            ++index;
        }
        else {
            Serr();
        }
    };
};


#endif //CS236_PROJECT_1_RULESAUTOMATA_H
