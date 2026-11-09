
#ifndef UNIQUE_ID_H
#define UNIQUE_ID_H

#include <iostream>

class UniqueID {
private:
    int id_;

public:
    explicit UniqueID(int id) : id_(id) {}

    UniqueID(const UniqueID&) = delete;
    UniqueID& operator=(const UniqueID&) = delete;

    void display() const {
        std::cout << "Unique ID: " << id_ << '\n';
    }
};

#endif
