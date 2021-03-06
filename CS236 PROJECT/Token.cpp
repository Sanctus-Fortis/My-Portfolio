#include "Token.h"

Token::Token(TokenType type, std::string description, int line) {
    this->type = type;
    this->value = description;
    this->lineNum = line;
}

void Token::setValue(string newValue) {
    this->value = newValue;
}
void Token::setLineNum(int lineNum) {
    this->lineNum = lineNum;
}
void Token::setType(TokenType type) {
    this->type = type;
}

string Token::typeString() {
    switch (type)
    {
        case TokenType::COMMA: return "COMMA";
            break;
        case TokenType::PERIOD: return "PERIOD";
            break;
        case TokenType::Q_MARK: return "Q_MARK";
            break;
        case TokenType::LEFT_PAREN: return "LEFT_PAREN";
            break;
        case TokenType::RIGHT_PAREN: return "RIGHT_PAREN";
            break;
        case TokenType::COLON: return "COLON";
            break;
        case TokenType::COLON_DASH: return "COLON_DASH";
            break;
        case TokenType::MULTIPLY: return "MULTIPLY";
            break;
        case TokenType::ADD: return "ADD";
            break;
        case TokenType::SCHEMES: return "SCHEMES";
            break;
        case TokenType::FACTS: return "FACTS";
            break;
        case TokenType::RULES: return "RULES";
            break;
        case TokenType::QUERIES: return "QUERIES";
            break;
        case TokenType::ID: return "ID";
            break;
        case TokenType::STRING: return "STRING";
            break;
        case TokenType::COMMENT: return "COMMENT";
            break;
        case TokenType::UNDEFINED: return "UNDEFINED";
            break;
        case TokenType::END_OF_FILE: return "EOF";
            break;
        default: return "UNDEFINED";
    }
    return "ERROR";
}

string Token::toString() {
    string output;
    output += "(";
    switch (type) {
        case TokenType::COLON:
            output += "COLON";
            break;
        case TokenType::COLON_DASH:
            output += "COLON_DASH";
            break;
        case TokenType:: COMMA:
            output += "COMMA";
            break;
        case TokenType::PERIOD:
            output += "PERIOD";
            break;
        case TokenType::Q_MARK:
            output += "Q_MARK";
            break;
        case TokenType::LEFT_PAREN:
            output += "LEFT_PAREN";
            break;
        case TokenType::RIGHT_PAREN:
            output += "RIGHT_PAREN";
            break;
        case TokenType::MULTIPLY:
            output += "MULTIPLY";
            break;
        case TokenType::ADD:
            output += "ADD";
            break;
        case TokenType::SCHEMES:
            output += "SCHEMES";
            break;
        case TokenType::FACTS:
            output += "FACTS";
            break;
        case TokenType::RULES:
            output += "RULES";
            break;
        case TokenType::QUERIES:
            output += "QUERIES";
            break;
        case TokenType::ID:
            output += "ID";
            break;
        case TokenType::STRING:
            output += "STRING";
            break;
        case TokenType::COMMENT:
            output += "COMMENT";
            break;
        case TokenType::END_OF_FILE:
            output += "EOF";
            break;
        case TokenType::UNDEFINED:
            output += "UNDEFINED";
            break;
    }
    output += ",\"" + value + "\"," + to_string(lineNum) + ")\n";
    return output;
}
