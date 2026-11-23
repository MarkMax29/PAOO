
#include <iostream>

#include "Widget.h"
#include "Customer.h"
#include "PriorityCUstomer.h"

int main()
{
    // ITEM 10 - Return reference to *this
    std::cout << "===== ITEM 10 =====\n";

    Widget w1(10);
    Widget w2(20);
    Widget w3(30);

    // Chained assignment
    w3 = w2 = w1;

    std::cout << "After chained assignment:\n";
    w1.display();
    w2.display();
    w3.display();


    // ITEM 11 - Self-assignment
    std::cout << "\n===== ITEM 11 =====\n";

    Widget w4(100);

    std::cout << "Before self-assignment:\n";
    w4.display();

    w4 = w4;

    std::cout << "After self-assignment:\n";
    w4.display();


    // ITEM 12 - Copy all parts of an object
    std::cout << "\n===== ITEM 12 =====\n";

    PriorityCustomer c1("Alex", 5);

    // Copy constructor
    PriorityCustomer c2(c1);

    std::cout << "Copied customer:\n";
    c2.display();

    // Copy assignment
    PriorityCustomer c3("Maria", 2);
    c3 = c1;

    std::cout << "Assigned customer:\n";
    c3.display();

    return 0;
}
