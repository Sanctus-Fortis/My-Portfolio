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
    ifstream fileInput(argv[1]);
    if (fileInput.is_open()) {
        while (fileInput) {
            totalInput.push_back((fileInput.get()));
        }
        /*for (unsigned int i = totalInput.size() - 1; i < totalInput.size(); i--) {
            if (isspace(totalInput.at(i))) {
                totalInput.erase(totalInput.begin()+i);
            }
        }*/
    }
    else {
        cout << "FAILED";
    }
    lexer->Run(totalInput);

    delete lexer;

    return 0;
}