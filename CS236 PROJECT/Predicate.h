#ifndef PREDIC_H
#define PREDIC_H
#include<iostream>
#include <string>
#include <vector>
#include "Parameter.h"

using namespace std;

class Predicate
{
public:
	Predicate() { string id = ""; }
	string getName() { return id; }
	bool setName(string input) { 
		id = input; 
		return 1;
	}
	void setContent(vector<Parameter> content) {
		this->content = content;
	}

	vector<Parameter> getContent() {
		return content;
	}

	string contentToString() {
		string output;
		for (unsigned int i = 0; i < content.size(); ++i) {
			output += content.at(i).toString();
		}
		return output;
	}

	vector<string> contentToStringV() {
		vector<string> temp;
		for (unsigned int i = 0; i < content.size(); ++i) {
			temp.push_back(content.at(i).toString());
		}
		return temp;
	}

	string getId() {
		return id;
	}

	string toString() { 
		cout  << id << "(";
		for (unsigned int i = 0; i < content.size(); ++i) {
			cout << "" << content.at(i).toString() << "";
			if (i != content.size() - 1) {
				cout << ",";
			}
		}
		cout << ")";
		return ""; 
	}

private:
	string id = "";
	vector<Parameter> content; // Essentially a vector of string

};
#endif
