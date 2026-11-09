
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name_;
    int age_;
    double average_;

public:
    Student(const std::string& name, int age, double average);

    void display() const;
};

#endif
