#ifndef PARAM_H
#define PARAM_H
#include <string>

using namespace std;

class Parameter
{
public:
	Parameter() {}
	virtual string toString() { return content; }
	virtual string getContent() { return content; }
	void setContent(string content) {
		this->content = content;
	}
private:
	string content;

};
#endif

