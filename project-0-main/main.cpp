#include <iostream>
#include <string>
#include <vector>
#include "Book.h"
#include "BookListCreator.h"
#include "Library.h"

using namespace std;

int main(int argc, char *argv[]) {
    // check command line arguments
    if (argc != 2) {
        std::cout << "usage: " << argv[0] << " input_file" << endl;
        return 1;
    }

    // open file
    string fileName = argv[1];
    ifstream input(fileName);
    if (!input.is_open()) {
        cout << "File " << fileName << " could not be found or opened." << endl;
        return 1;
    }

    // get book list
    vector<Book*> bookList;
    try {
        BookListCreator bookListCreator(input);
        bookList = bookListCreator.createBookList();
    } catch (char const* error) {
        cout << error << endl;
        return 1;
    }

    // create and output library
    Library library(bookList);
    cout << library;

    return 0;
}
