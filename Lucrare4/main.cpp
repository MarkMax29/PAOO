
#include <iostream>

#include "Student.h"
#include "Course.h"
#include "UniqueID.h"

int main() {

    // ITEM 4 - Initialization
    std::cout << "===== ITEM 4: INITIALIZATION =====\n";

    Student s1("Alex", 22, 9.50);
    s1.display();


    // ITEM 5 - Compiler-generated functions
    std::cout << "\n===== ITEM 5: COMPILER-GENERATED FUNCTIONS =====\n";

    Course c1;
    c1.title = "Object Oriented Programming";
    c1.credits = 5;

    std::cout << "Original object:\n";
    c1.display();

    Course c2(c1);  // Implicit copy constructor

    c2.title = "Mathematics";
    c2.credits = 4;

    std::cout << "After changing the copy:\n";
    c1.display();
    c2.display();
    
    std::cout << "Copied object:\n";
    c2.display();

    Course c3;
    c3 = c1;  // Implicit copy assignment

    std::cout << "Assigned object:\n";
    c3.display();


    // ITEM 6 - Disallowing copies
    std::cout << "\n===== ITEM 6: DISALLOWING COPIES =====\n";

    UniqueID id1(101);
    UniqueID id2(202);

    id1.display();
    id2.display();

    // Uncomment to see compilation errors:
    //UniqueID id3(id1);
    //id2 = id1;

    std::cout << "Copying UniqueID objects is forbidden.\n";

    return 0;
}
