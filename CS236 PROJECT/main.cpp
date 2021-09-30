#include "Lexer.h"
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include "Token.h"
#include "Parser.h"
using namespace std;

int main(int argc, char** argv) {

    Lexer* lexer = new Lexer();

    string inputString;
    string totalInput;
    ifstream fileInput(argv[1]);
    if (fileInput.is_open()) {
        while (fileInput) {
            totalInput.push_back((fileInput.get()));
        }
    }
    else {
        cout << "FAILED";
    }
    lexer->Run(totalInput);
    Parser mainParser(lexer->getVector());
    mainParser.clearComment();
    try {
        mainParser.parse();
        cout << "Success!" << endl;
        mainParser.toString();
    }
    catch (Token* baseball) {
        cout << "Failure!" << endl;
        cout << "  " << baseball->toString() <<endl;
    }

    delete lexer;

    return 0;
}