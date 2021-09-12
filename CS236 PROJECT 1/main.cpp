#include "Lexer.h"
#include <fstream>
#include <iostream>
#include <string>
#include "Token.h"
using namespace std;

int main(int argc, char** argv) {

    Lexer* lexer = new Lexer();

    // TODO
    string inputString;
    string totalInput;
    ifstream fileInput("input.txt");
    if (fileInput.is_open()) {
        while (fileInput) {
            inputString.push_back((fileInput.get()));
            if (fileInput) {
                totalInput += inputString;
            }
        }
    }
    else {
        cout << "FAILED";
    }
    cout << totalInput << endl;

    Token myTok(TokenType::COMMA,"COMMA", 5);
    cout << myTok.toString();

    delete lexer;

    return 0;
}