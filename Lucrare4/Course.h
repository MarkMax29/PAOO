
#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <iostream>

class Course {
public:
    std::string title = "Unknown";
    int credits = 0;

    void display() const {
        std::cout << "Course: " << title
                  << ", Credits: " << credits
                  << '\n';
    }
};

#endif
