#ifndef TUPLE_H
#define TUPLE_H
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Tuple
{
private:
	vector<string> values; // Works the same as header
public:
	Tuple() {

	}
	Tuple(vector<string> temp) {
		values = temp;
	}

	void pushBack(string value) {
		values.push_back(value);
	}

	Tuple removeColT(int i) {
		Tuple temp;
		values.at(i).erase();
		temp.setValues(values);
		return temp;
	}

	void setValues(vector<string> values) {
		this->values = values;
	}
	vector<string> getVector() {
		return values;
	}
	//Return size of values vector
	unsigned int getValSize() {
		return values.size();
	}

	//Compares tuples
	bool operator< (const Tuple& other) const {	
		return values < other.values;
	}

	string toString() {
		stringstream output;
		for (unsigned int i = 0; i < values.size(); ++i) {
			output << values.at(i) << " ";
		}
		output << endl;
		return output.str();
	}
};
#endif
