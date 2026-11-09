
#include "Student.h"
#include <iostream>

Student::Student(const std::string& name, int age, double average)
    : name_(name), age_(age), average_(average)
{
    std::cout << "Student initialized!\n";
}

void Student::display() const {
    std::cout << "Name: " << name_
              << ", Age: " << age_
              << ", Average: " << average_
              << '\n';
}
