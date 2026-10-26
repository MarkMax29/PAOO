#include "Book.h"
#include <iostream>
#include <utility>

//Constructor
Book::Book(const std::string& title, int pages)
    : title_(title), pages_(new int(pages))
{
    std::cout << "[Constructor] " << title_ << "\n";
}

//Destructor
Book::~Book()
{
    std::cout << "[Destructor] " << title_ << "\n";
    delete pages_;
}

//Copy Constructor
Book::Book(const Book& other)
    : title_(other.title_),
      pages_(other.pages_ ? new int(*other.pages_) : nullptr)
{
    std::cout << "[Copy Constructor] " << title_ << "\n";
}

//Move Constructor
Book::Book(Book&& other) noexcept
    : title_(std::move(other.title_)),
      pages_(other.pages_)
{
    other.pages_ = nullptr;

    std::cout << "[Move Constructor] " << title_ << "\n";
}

//Modificarea numarului de pagini
void Book::setPages(int pages)
{
    if (pages_ != nullptr) {
        *pages_ = pages;
    }
}

//Afisarea cartii
void Book::display() const
{
    std::cout << "Titlu: " << title_;

    if (pages_ != nullptr) {
        std::cout << " | Pagini: " << *pages_;
        std::cout << " | Adresa: " << pages_;
    } else {
        std::cout << " | Fara memorie alocata";
    }

    std::cout << "\n";
}