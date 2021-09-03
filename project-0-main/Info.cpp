//
// Created by BYU CS 236 on 3/22/2021.
//

#include "Info.h"

Info::Info(std::string type, std::string info) {
    this->type = stringToEnum(type);
    this->info = info;
}

std::string Info::enumToString(Info::InfoType type) {
    switch(type) {
        case TITLE:
            return "title";
        case AUTHOR:
            return "author";
        case GENRE:
            return "genre";
        case PAGES:
            return "pages";
        case HOURS:
            return "hours";
        default:
            return "";
    }
}

Info::InfoType Info::stringToEnum(std::string string) {
    if (string == "title") {
        return TITLE;
    }
    else if (string == "author") {
        return AUTHOR;
    }
    else if (string == "genre") {
        return GENRE;
    }
    else if (string == "pages") {
        return PAGES;
    }
    else if (string == "hours") {
        return HOURS;
    }
    else {
        return UNRECOGNIZED;
    }
}

Info::InfoType Info::getType() {
    return type;
}

std::string Info::getInfo() {
    return info;
}

