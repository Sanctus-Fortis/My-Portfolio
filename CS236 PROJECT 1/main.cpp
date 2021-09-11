#include "Lexer.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    Lexer* lexer = new Lexer();

    // TODO
    string inputString;
    string totalInput;
    ifstream fileInput("input.txt");
    if (fileInput.is_open()) {
        while (fileInput) {
            fileInput >> inputString;
            if (fileInput) {
                totalInput += inputString;
            }
        }
    }
    else {
        cout << "FAILED";
    }
    cout << totalInput;

    delete lexer;

    return 0;
}