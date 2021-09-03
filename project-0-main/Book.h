//
// Created by BYU CS 236 on 3/22/2021.
//

#ifndef PROJECT_0_SOLUTION_BOOK_H
#define PROJECT_0_SOLUTION_BOOK_H

#include <string>
#include <iostream>

class Book {
public:
    Book(std::string title, std::string author);

    void setGenre(std::string genre);

    void setPages(std::string pages);

    void setHours(std::string hours);

    std::string getTitle() const;

    std::string getAuthor() const;

    std::string getGenre() const;

    int getPages() const;

    double getHours() const;

    bool hasGenre();

    bool hasPages();

    bool hasHours();

    std::string toString() const;

    friend std::ostream& operator<< (std::ostream& os, const Book& book) {
        os << book.toString();
        return os;
    }

private:
    std::string title;
    std::string author;
    std::string genre = "uncategorized";
    int pages = 0;
    double hours = 0;
    bool genreSet;
    bool pagesSet;
    bool hoursSet;
};


#endif //PROJECT_0_SOLUTION_BOOK_H
