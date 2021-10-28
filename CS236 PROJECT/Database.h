#ifndef DATABASE_H
#define DATABASE_H
#include <iterator>
#include <map>
#include <algorithm>
#include <sstream>
#include "Relation.h"

using namespace std;

class Database
{
public:
	Database() {

	}
	Relation getRelation(string name) {
		return relations[name];
	}
	void addToRelation(string id, vector<string> tuple) {
		relations[id].addTuple(tuple);
	}
	void addToMap(string name, Relation relation) {
		relations[name] = relation;
	}
	string toString() {
		stringstream output;
		for (pair<string, Relation> pair : relations) { 
			output << pair.first << "-->" << pair.second.toString() << endl; 
		}
		output << endl;
		return output.str();
	}

private:
	map<string, Relation> relations;

};
#endif

