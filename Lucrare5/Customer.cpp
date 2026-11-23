
#include "Customer.h"

#include <iostream>

Customer::Customer(const std::string& name): name_(name)
{
}

Customer::Customer(const Customer& other): name_(other.name_)
{
    std::cout << "Customer copy constructor\n";
}

Customer& Customer::operator=(const Customer& other)
{
    if (this != &other) {
        name_ = other.name_;
    }

    return *this;
}

void Customer::display() const
{
    std::cout << "Name: " << name_ << '\n';
}
