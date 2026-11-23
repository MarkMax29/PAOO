
#include "PriorityCUstomer.h"

#include <iostream>

// Constructor
PriorityCustomer::PriorityCustomer(const std::string& name, int priority): Customer(name), priority_(priority)
{
}

// Copy constructor
PriorityCustomer::PriorityCustomer(const PriorityCustomer& other): Customer(other), priority_(other.priority_)
{
    std::cout << "PriorityCustomer copy constructor\n";
}

// Copy assignment
PriorityCustomer& PriorityCustomer::operator=(const PriorityCustomer& other)
{
    if (this != &other) {
        Customer::operator=(other);
        priority_ = other.priority_;
    }

    return *this;
}

// Display
void PriorityCustomer::display() const
{
    Customer::display();
    std::cout << "Priority: " << priority_ << '\n';
}
