//
// Created by BYU CS 236 on 3/22/2021.
//

#include <iostream>
#include <sstream>
#include "Library.h"

Library::Library(std::vector<Book*> books) {
    this->books = books;
    organizeBooksByAuthor();
    organizeBooksByGenre();
}

std::string Library::printMap(std::map<std::string, std::vector<Book*>> map) const {
    std::ostringstream output;
    int numPages;
    double numHours;
    for (std::pair<std::string, std::vector<Book*>> entry : map) {
        numPages = 0;
        numHours = 0;
        std::string key = entry.first;
        std::vector<Book*> books = entry.second;
        output << "\t" << key << std::endl;
        for (Book* book : books) {
            output << "\t\t" << *book << std::endl;
            numHours += book->getHours();
            numPages += book->getPages();
        }
        output << "\t\t---" << std::endl;
        output << "\t\tNumber of books: " << books.size() << std::endl;
        output << "\t\tNumber of pages: " << numPages << std::endl;
        output << "\t\tNumber of hours: " << numHours << std::endl;
        output << std::endl;
    }
    return output.str();
}

std::string Library::toString() const {
    std::ostringstream output;
    output << "Books, Organized By Author" << std::endl;
    output << printMap(booksByAuthor) << std::endl;
    output << "Books, Organized By Genre" << std::endl;
    output << printMap(booksByGenre) << std::endl;
    return output.str();
}

void Library::organizeBooksByAuthor() {
    for (Book* book : books) {
        std::string author = book->getAuthor();
        std::map<std::string,std::vector<Book*>>::iterator it = booksByAuthor.find(author);
        if (it == booksByAuthor.end()) {
            std::vector<Book*> bookList;
            bookList.push_back(book);
            booksByAuthor.insert(std::pair<std::string, std::vector<Book*>>(author, bookList));
        }
        else {
            std::vector<Book*> bookList = it->second;
            bookList.push_back(book);
            it->second = bookList;
        }
    }
}

void Library::organizeBooksByGenre() {
    for (Book* book : books) {
        std::string genre = book->getGenre();
        std::map<std::string,std::vector<Book*>>::iterator it = booksByGenre.find(genre);
        if (it == booksByGenre.end()) {
            std::vector<Book*> bookList;
            bookList.push_back(book);
            booksByGenre.insert(std::pair<std::string, std::vector<Book*>>(genre, bookList));
        }
        else {
            std::vector<Book*> bookList = it->second;
            bookList.push_back(book);
        }
    }
}
