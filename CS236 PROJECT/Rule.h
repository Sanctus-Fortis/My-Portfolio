#ifndef RULE_H
#define RULE_H
#include <string>
#include <vector>
#include "Predicate.h"

using namespace std;

class Rule
{
public:
	Rule() {}
	void setHeadPredicate(Predicate headPredicate) {
		this->headPredicate = headPredicate;
	}
	void setContent(vector<Predicate> content) {
		this->content = content;
	}

	string toString() {
		headPredicate.toString();
		cout << " :- ";
		for (unsigned int i = 0; i < content.size(); ++i) {
			content.at(i).toString();
			if (i != content.size() - 1) {
				cout << ",";
			}
		}
		return "";
	}
private:
	Predicate headPredicate;
	vector<Predicate> content;

};
#endif

