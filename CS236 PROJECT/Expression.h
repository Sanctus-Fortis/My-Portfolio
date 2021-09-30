#ifndef EXPRSS_H
#define EXPRSS_H
#include <string>
#include <sstream>
#include <iostream>
#include "Parameter.h"

using namespace std;

class Expression :
	public Parameter
{
public:
	Expression() {}
	string toString() { 
		stringstream temp;
		temp << "(" << paramOne.toString() << _operator << paramTwo.toString() << ")";
		//cout << temp.str() << "   -DEBUG-   " << endl;
		return temp.str(); }
	void setParamOne(Parameter paramOne) {
		this->paramOne = paramOne;
	}
	void setParamTwo(Parameter paramTwo) {
		this->paramTwo = paramTwo;
	}
	void setOperator(string _operator) {
		this->_operator = _operator;
	}
private:
	Parameter paramOne;
	Parameter paramTwo;
	string _operator = "";
};
#endif

