
#include "Widget.h"
#include <iostream>
#include <utility>

// Constructor
Widget::Widget(int value): val(new int(value))
{
    std::cout << "Widget constructor\n";
}

// Copy constructor
Widget::Widget(const Widget& other): val(new int(*other.val))
{
    std::cout << "Widget copy constructor\n";
}

// Copy assignment
Widget& Widget::operator=(const Widget& other)
{
    std::cout << "Widget copy assignment\n";

    Widget temp(other);

    std::swap(val, temp.val);

    return *this;
}

// Destructor
Widget::~Widget()
{
    delete val;
    std::cout << "Widget destructor\n";
}

// Display
void Widget::display() const
{
    std::cout << "Value: " << *val << '\n';
}
