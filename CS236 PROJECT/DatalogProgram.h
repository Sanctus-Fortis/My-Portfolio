#ifndef DATA_PRO_H
#define DATA_PRO_H
#include <sstream>
#include <string>
#include <set> 
#include "Expression.h"
#include "PlainParameter.h"
#include "Rule.h"
#include "Predicate.h"
#include "Parameter.h"

using namespace std;

class DatalogProgram
{
public:
	DatalogProgram() {}



    /*vector<Predicate> facts;
	vector<Predicate> queries;
	vector<Rule> rules;
	set<string> domain;*/

	vector<Predicate> getSchemes() {
		return schemes;
	}

	vector<Predicate> getFacts() {
		return facts;
	}

	vector<Rule> getRules() {
		return rules;
	}

	vector<Predicate> getQueries() {
		return queries;
	}

	vector<string> getHeader(unsigned int k) {
		return schemes.at(k).contentToStringV();;
	}

		void toString() {
			cout << "Schemes" << "(" << schemes.size() << "):" << endl;
			for (unsigned int i = 0; i < schemes.size(); ++i) {
				cout << "  ";
				schemes.at(i).toString();
				cout << endl;
			}
			cout << "Facts" << "(" << facts.size() << "):" << endl;
			for (unsigned int i = 0; i < facts.size(); ++i) {
				cout << "  ";
				facts.at(i).toString();
				cout << "." << endl;
			}
			cout << "Rules" << "(" << rules.size() << "):" << endl;
			for (unsigned int i = 0; i < rules.size(); ++i) {
				cout << "  ";
				rules.at(i).toString();
				cout << "." << endl;
			}
			cout << "Queries" << "(" << queries.size() << "):" << endl;
			for (unsigned int i = 0; i < queries.size(); ++i) {
				cout << "  ";
				queries.at(i).toString();
				cout << "?" << endl;
			}
			cout << "Domain(" << domain.size() << "):" << endl;
			for (auto i = domain.begin(); i != domain.end(); ++i) {
				cout << "  " << *i << "" << endl;
			}
		}

		void setSchemes(vector<Predicate> schemes) {
			this->schemes = schemes;
		}

		void setFacts(vector<Predicate> facts) {
			this->facts = facts;
		}

		void setQueries(vector<Predicate> queries) {
			this->queries = queries;
		}

		void setRules(vector<Rule> rules) {
			this->rules = rules;
		}

		void setDomain(set<string> domain) {
			this->domain = domain;
		}

		void createDomain() {
			for (unsigned int i = 0; i < facts.size(); ++i) {
				for (unsigned int j = 0; j < facts.at(i).getContent().size(); ++j) {
					domain.insert(facts.at(i).getContent().at(j).toString());
				}
			}
		}
private:
	vector<Predicate> schemes;
	vector<Predicate> facts;
	vector<Predicate> queries;
	vector<Rule> rules;
	set<string> domain;
};

#endif

