//
// Created by BYU CS 236 on 3/22/2021.
//

#ifndef PROJECT_0_SOLUTION_BOOKCREATOR_H
#define PROJECT_0_SOLUTION_BOOKCREATOR_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Book.h"
#include "Info.h"

class BookCreator {
public:
    BookCreator(std::ifstream& input);
    Book* createBook();
    bool hasMoreBooksToCreate();
    void match(Info info, Info::InfoType infoType);
    bool check(Info info, Info::InfoType infoType);

private:
    std::vector<std::string> inputLines;
    Info extractInfo(std::string line);
    size_t currLineIdx;
};

#endif //PROJECT_0_SOLUTION_BOOKCREATOR_H
