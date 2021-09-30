#ifndef PLN_PARAM_H
#define PLN_PARAM_H
#include <string>
#include "Parameter.h"

using namespace std;

class PlainParameter :
	public Parameter
{
public:
	PlainParameter() {};
	PlainParameter(string content) {
		this->content = content;
	}
	PlainParameter(string content, bool isId) { 
		this->content = content; 
		this->isId = isId; 
	}
	string getContent() { return content; }
	string toString() {
		return content;
	}
private:
	string content = "";
	bool isId = 0;
};
#endif

