#ifndef HEADER_H
#define HEADER_H
#include <vector>
#include <string>
#include <sstream>

using namespace std;
class Header
{
private:
	vector<string> attributes; // In SNAP the 'S' would be one attribute
public:
	vector<string> getAttributes() {
		return this->attributes;
	}

	string toString() {
		stringstream output;
		for (unsigned int i = 0; i < attributes.size(); ++i) {
			output << attributes.at(i) << " ";
		}
		output << endl;
		return output.str();
	}
};
#endif

