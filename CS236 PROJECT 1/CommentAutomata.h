//
// Created by Addison on 9/12/2021.
//

#ifndef CS236_PROJECT_1_COMMENTAUTOMATA_H
#define CS236_PROJECT_1_COMMENTAUTOMATA_H
#include "Automaton.h"

class CommentAutomata : public Automaton {
public:
    CommentAutomata() : Automaton(TokenType::COMMENT) {}
    void S0(const std::string& input) override {
        if (input[index] == '#') {
            inputRead = 1;
            ++index;
            if (input[index] == '|') {
                ++inputRead;
                ++index;
                S2(input);
            }
            else {
                Serr();
            }
        }
        else {
            Serr();
        }
    };
    void S1(const std::string& input) {
        if (index == input.size() - 1) {
            Serr();
        }
        else if (input[index] != ('\n')) {
            ++inputRead;
            ++index;
            S1(input);
        }
    }
    void S2(const std::string& input) {
        if (input[index] == '|') {
            ++inputRead;
            ++index;
            S3(input);
        }
        else if(index == input.size() - 1) {
            Serr();
        }
        else {
            if (input[index] == '\n') {
                ++newLines;
            }
            ++inputRead;
            ++index;
            S2(input);
        };
    }
    void S3(const std::string& input) {
        if (input[index] == '#') {
            ++inputRead;
            ++index;
        }
        else if(index == input.size() - 1) {
            Serr();
        }
        else {
            S2(input);
        }
    }
private:

};


#endif //CS236_PROJECT_1_COMMENTAUTOMATA_H
