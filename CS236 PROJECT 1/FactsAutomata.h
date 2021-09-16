//
// Created by Addison on 9/12/2021.
//

#ifndef CS236_PROJECT_1_FACTSAUTOMATA_H
#define CS236_PROJECT_1_FACTSAUTOMATA_H
#include "Automaton.h"

class FactsAutomata : public Automaton {
public:
    FactsAutomata() : Automaton(TokenType::FACTS) {}
    void S0(const std::string& input) override {
        if (input[index] == 'F') {
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
        if (input[index] == 'a') {
            ++inputRead;
            ++index;
            S2(input);
        }
        else {
            Serr();
        }
    };
    void S2(const std::string& input) {
        if (input[index] == 'c') {
            ++inputRead;
            ++index;
            S3(input);
        }
        else {
            Serr();
        }
    };
    void S3(const std::string& input)  {
        if (input[index] == 't') {
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


#endif //CS236_PROJECT_1_FACTSAUTOMATA_H
