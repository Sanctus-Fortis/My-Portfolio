//
// Created by BYU CS 236 on 3/22/2021.
//

#ifndef PROJECT_0_SOLUTION_BOOKLISTCREATOR_H
#define PROJECT_0_SOLUTION_BOOKLISTCREATOR_H

#include <iostream>
#include <fstream>
#include <vector>
#include "BookCreator.h"
#include "Book.h"

class BookListCreator {
public:
    BookListCreator(std::ifstream& input);
    std::vector<Book*> createBookList();
private:
    BookCreator bookCreator;
    std::vector<Book*> bookList;
};


#endif //PROJECT_0_SOLUTION_BOOKLISTCREATOR_H
