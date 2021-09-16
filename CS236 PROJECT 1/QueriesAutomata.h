//
// Created by Addison on 9/12/2021.
//

#ifndef CS236_PROJECT_1_QUERIESAUTOMATA_H
#define CS236_PROJECT_1_QUERIESAUTOMATA_H
#include "Automaton.h"

class QueriesAutomata : public Automaton {
public:
    QueriesAutomata() : Automaton(TokenType::QUERIES) {}

    void S0(const std::string& input) override {
        if (input[index] == 'Q') {
            ++index;
            inputRead = 1;
            S1(input);
        }
        else {
            Serr();
        }
    };
private:
    void S1(const std::string& input) {
        if (input[index] == 'u') {
            ++index;
            ++inputRead;
            S2(input);
        }
        else {
            Serr();
        }
    };
    void S2(const std::string& input) {
        if (input[index] == 'e') {
            ++index;
            ++inputRead;
            S3(input);
        }
        else {
            Serr();
        }
    }
    void S3(const std::string& input) {
        if (input[index] == 'r') {
            ++index;
            ++inputRead;
            S4(input);
        }
        else {
            Serr();
        }
    }
    void S4(const std::string& input) {
        if (input[index] == 'i') {
            ++index;
            ++inputRead;
            S5(input);
        }
        else {
            Serr();
        }
    }
    void S5(const std::string& input) {
        if (input[index] == 'e') {
            ++index;
            ++inputRead;
            S6(input);
        }
        else {
            Serr();
        }
    }
    void S6(const std::string& input) {
        if (input[index] == 's') {
            ++index;
            ++inputRead;
        }
        else {
            Serr();
        }
    }
};


#endif //CS236_PROJECT_1_QUERIESAUTOMATA_H
