#ifndef RELATION_H
#define RELATION_H
#include <set>
#include <vector>
#include <iterator>
#include <iostream>
#include <algorithm>
#include "Tuple.h"

using namespace std;

class Relation
{
private:
	string name;
	vector<string> header;
	set<Tuple> tuples; // represents rows in the relation (i.e. header = SNAP, Tuple = abcd, S = a, N = b, A = c, P = d)
public:
	Relation(string name, vector<string> header) {
		this->name = name;
		this->header = header;
	}
	Relation() {

	}

	void setTuples(set<Tuple> tup) {
		this->tuples = tup;
	}

	int numRelations() {
		return tuples.size();
	}

	void addToHeader(string newCol) {
		header.push_back(newCol);
	}

	void newHeader(vector<string> attributes) {
		header = attributes;
	}

	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	void addTuplePart(Tuple newTuple, int position) {
		vector<string> tuplePart;
		tuplePart.push_back(newTuple.getVector().at(position));
		Tuple temp(tuplePart);
		tuples.insert(temp);
	}

	//Select never changes the header. Returns a new relation.
	Relation selectConst(int position, string value) {   // keep if position->value == value
		Relation temp; // create relation
		temp.newHeader(this->header);
		for (auto elem : tuples)
		{
			if (elem.getVector().at(position) == value) {
				temp.addTuple(elem);
			}
		}
		return temp;
	}
	Relation selectVar(int posOne, int posTwo) { // compare values for each position if they match add the tuple to the relation
		Relation temp; // create relation
		temp.newHeader(this->header);
		for (auto elem : tuples)
		{
			if (elem.getVector().at(posOne) == elem.getVector().at(posTwo)) {
				temp.addTuple(elem);
			}
		}
		return temp;
	}	//Two parameters that are both positions, they must be equal for the tuple to be included in the result

	// Project changes the number and order of columns in a relation. Should return a relation.
	Relation project(vector<int> indices, Relation original) { // keep certain columns in the table and modify header accordingly
		Relation temp;
		for (unsigned int i = 0; i < indices.size(); ++i) {
			temp.addToHeader(header.at(indices.at(i)));
		}
		for (auto elem : tuples)
		{
			Tuple newTup;
			for (unsigned int i = 0; i < indices.size(); ++i) {
				newTup.pushBack(elem.getVector().at(indices.at(i)));
			}
			temp.addTuple(newTup);
		}
		return temp;
	}									//Takes a list of indices(the columns to keep)

	//Changes the header of the relation. Should not change tuples. Should return a relation.
	//Recommended to change the entire list of attributes at once
	Relation rename(vector<string> attributes, Relation original) { // Just change header
		Relation temp; // create relation
		temp = original;
		temp.newHeader(attributes);
		return temp;
	}								//Takes a list of attributes (defines the new header)

	void addTuple(vector<string> newTuple) {
		Tuple temp(newTuple);
		tuples.insert(temp);
	}

	void addTuple(Tuple temp) {
		tuples.insert(temp);
	}

	string toString() {
		for (auto elem : tuples) {
			for (unsigned int i = 0; i < elem.getVector().size(); ++i) {
                if (i == 0) {
                    cout << "  ";
                }
				cout << header.at(i) << "=" << elem.getVector().at(i);
				if (i != elem.getVector().size() - 1) {
					cout << ", ";
				}
				else {
					cout << endl;
				}
			}
		}
		return "";
	}

};
#endif

