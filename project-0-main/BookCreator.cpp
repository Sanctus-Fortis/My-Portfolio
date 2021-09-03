//
// Created by BYU CS 236 on 3/22/2021.
//

#include "BookCreator.h"
#include "Info.h"

BookCreator::BookCreator(std::ifstream& input) {
    std::string line;
    while (!input.eof()) {
        getline(input, line);
        inputLines.push_back(line);
    }
    currLineIdx = 0;
}

Book* BookCreator::createBook() {
    int lineNum = 0;
    std::string title = "";
    std::string author = "";
    Book* book = nullptr;
    while (currLineIdx < inputLines.size()) {

       std::string currLine = inputLines.at(currLineIdx);

        // if this line consists only of white space, skip to the next line
        bool isSpace = true;
        for (size_t i = 0; i < currLine.size(); i++) {
            if (!isspace(currLine.at(i))) {
                isSpace = false;
                break;
            }
        }
        if (isSpace) {
            currLineIdx++;
            break;
        }

        // begin creating the book
        Info info = extractInfo(currLine);
        if (lineNum == 0) {
            match(info, Info::TITLE);
            title = info.getInfo();
        }
        else if (lineNum == 1) {
            match(info, Info::AUTHOR);
            author = info.getInfo();
            book = new Book(title, author);
        }
        else {
            if (check(info, Info::TITLE)) {
                throw "Title can not be set twice for the same book.";
            }
            else if (check(info, Info::AUTHOR)) {
                throw "Author can not be set twice for the same book.";
            }
            else if (check(info, Info::GENRE)) {
                if (book->hasGenre()) {
                    throw "Genre can not be set twice for the same book.";
                }
                book->setGenre(info.getInfo());
            }
            else if (check(info, Info::HOURS)) {
                if (book->hasHours()) {
                    throw "Hours can not be set twice for the same book.";
                }
                book->setPages(info.getInfo());
            }
            else if (check(info, Info::PAGES)) {
                if (book->hasPages()) {
                    throw "Pages can not be set twice for the same book.";
                }
                book->setPages(info.getInfo());
            }
        }
        currLineIdx++;
        lineNum++;
    }
    if (title == "" || author == "") {
        throw "Title and author data not provided as required.";
    }
    return book;
}

bool BookCreator::hasMoreBooksToCreate() {
    return currLineIdx < inputLines.size();
}

Info BookCreator::extractInfo(std::string line) {
    int pos = line.find(' ');

    std::string firstWord = line.substr(0, pos);
    std::string restOfString = line.substr(pos + 1);

    if (firstWord.at(firstWord.length() - 1) == ':') {
        firstWord = firstWord.substr(0, firstWord.length() - 1);
    }

    Info info(firstWord, restOfString);

    if (info.getType() == Info::UNRECOGNIZED) {
        throw "Sorry, info type " + firstWord + " is not recognized.";
    }

    return info;
}

void BookCreator::match(Info info, Info::InfoType infoType) {
    if (info.getType() != infoType) {
        throw "Info provided was not of type " + Info::enumToString(infoType) + " as expected.";
    }
}

bool BookCreator::check(Info info, Info::InfoType infoType) {
    return info.getType() == infoType;
}
