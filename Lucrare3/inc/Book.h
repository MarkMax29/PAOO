#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title_;
    int* pages_;

public:
    Book(const std::string& title, int pages);
    ~Book();

    Book(const Book& other);
    Book(Book&& other) noexcept;

    Book& operator=(const Book& other) = delete;
    Book& operator=(Book&& other) = delete;

    void setPages(int pages);
    void display() const;
};

#endif