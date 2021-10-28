#ifndef INTERPRETER_H
#define INTERPRETER_H
#include "DatalogProgram.h"
#include "Database.h"
#include <map>
#include <vector>
class Interpreter
{
public:

	Interpreter(DatalogProgram datalog) {
		this->myDatalog = datalog;
	}
	Interpreter() {

	}

	void buildDatabase() { // DONE
		for (unsigned int i = 0; i < myDatalog.getSchemes().size(); ++i) {
			string name = myDatalog.getSchemes().at(i).getId();
			Relation relation(myDatalog.getSchemes().at(i).getName(), myDatalog.getHeader(i));
			myDatabase.addToMap(name, relation);
		}
		for (unsigned int k = 0; k < myDatalog.getSchemes().size(); ++k) { // For each scheme
			for (unsigned int i = 0; i < myDatalog.getFacts().size(); ++i) { // Go through each fact
				if (myDatabase.getRelation(myDatalog.getFacts().at(i).getId()).getName() == myDatalog.getSchemes().at(k).getId()) { //If names match
					string id = myDatabase.getRelation(myDatalog.getFacts().at(i).getId()).getName();;
					addNewTuple(id, myDatalog.getFacts().at(i).contentToStringV());
				}
			}
		}
	}
	void addNewTuple(string id, vector<string> newTuple) {
		myDatabase.addToRelation(id, newTuple);
	}
	void setDatalog(DatalogProgram newDatalog) {
		myDatalog = newDatalog;
	}
	void setDatabase(Database newDatabase) {
		myDatabase = newDatabase;
	}
	void schemeRelation() {
		string name;
		vector<string> header;
		//get schemes
		Relation relation(name, header);
	}
	string toString() {
		return myDatabase.toString();
	}
	void interpret() {
		evaluateAllQueries();
	}

	void evaluateAllQueries() {
		for (unsigned int i = 0; i < myDatalog.getQueries().size(); ++i) {
			Relation temp;
			temp = evaluatePred(myDatalog.getQueries().at(i));
		}
	}

	Relation evaluatePred(Predicate p) { // Evaluate one query predicate and return a Relation.
		// if it starts with an ' then it is a constant
		map<string, int> seenVar;
		vector<string> varNames;
		vector<int> varIndex;
		cout << p.toString() << "?";
		Relation temp = myDatabase.getRelation(p.getName());
		temp.setName(p.getName());
		for (unsigned int i = 0; i < p.contentToStringV().size(); ++i) {
			if (p.contentToStringV().at(i).at(0) == '\'') {
				temp = temp.selectConst(i, p.contentToStringV().at(i));
			}
			else {
				if (seenVar.count(p.contentToStringV().at(i))) {
					temp = temp.selectVar(seenVar[p.contentToStringV().at(i)], i);
				}
				else {
					// Saving variables for later checks
					seenVar.emplace(p.contentToStringV().at(i), i);
					varNames.push_back(p.contentToStringV().at(i));
					varIndex.push_back(i);
				}
			}
		}
		temp = temp.project(varIndex, temp);
		temp = temp.rename(varNames, temp);
		if (temp.numRelations()) {
			cout << " Yes" << "(" << temp.numRelations() << ")" << endl;
		}
		else {
			cout << " No" << endl;
		}
		cout << temp.toString();

		return temp;
	}

private:
	DatalogProgram myDatalog;
	Database myDatabase;
};
#endif

