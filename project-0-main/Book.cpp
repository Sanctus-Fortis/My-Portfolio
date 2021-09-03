//
// Created by BYU CS 236 on 3/22/2021.
//

#include <string>
#include <sstream>
#include "Book.h"

Book::Book(std::string title, std::string author) {
    this->title = title;
    this->author = author;
    genreSet = false;
    hoursSet = false;
    pagesSet = false;
}

void Book::setGenre(std::string genre) {
    this->genre = genre;
}

void Book::setPages(std::string pages) {
    int numPages = 0;
    try {
        numPages = stoi(pages);
        if (numPages < 0) {
            throw std::invalid_argument("Invalid argument");
        }
    }
    catch (const std::invalid_argument& e) {
        throw "Page value must be a whole number.";
    }
    this->pages = numPages;
    pagesSet = true;
}

void Book::setHours(std::string hours) {
    double numHours = 0;
    try {
        numHours = stod(hours);
        if (numHours < 0) {
            throw std::invalid_argument("Invalid argument");
        }
    }
    catch (const std::invalid_argument& e) {
        throw "Hour value must be a positive number.";
    }
    this->hours = numHours;
    hoursSet = true;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

std::string Book::getGenre() const {
    return genre;
}

int Book::getPages() const {
    return pages;
}

double Book::getHours() const {
    return hours;
}

bool Book::hasGenre() {
    return genreSet;
}

bool Book::hasPages() {
    return pagesSet;
}

bool Book::hasHours() {
    return hoursSet;
}

std::string Book::toString() const {
    std::ostringstream output;
    output << title << " by " << author;
    return output.str();
}



