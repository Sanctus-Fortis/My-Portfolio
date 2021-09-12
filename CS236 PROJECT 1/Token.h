#ifndef TOKEN_H
#define TOKEN_H
#include <string>

using namespace std;

enum class TokenType {
    COLON,
    COLON_DASH,
    COMMA,
    PERIOD,
    Q_MARK,
    LEFT_PAREN,
    RIGHT_PAREN,
    MULTIPLY,
    ADD,
    SCHEMES,
    FACTS,
    RULES,
    QUERIES,
    ID,
    STRING,
    COMMENT,
    END_OF_FILE,
    // TODO: add the other types of tokens
    UNDEFINED
};

class Token
{
private:
    // TODO: add member variables for information needed by Token

    string value;
    int lineNum;   //line number the token starts on.
    TokenType type;

public:
    Token(TokenType type, std::string description, int line);
    string toString();
    void setValue(string value);
    void setLineNum(int lineNum);
    void setType(TokenType type);

};

#endif // TOKEN_H

