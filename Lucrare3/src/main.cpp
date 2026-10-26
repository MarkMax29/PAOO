#include <iostream>
#include <utility>
#include "Book.h"

int main()
{
    std::cout << "=== 1. CONSTRUCTOR ===\n";

    Book original("C++ Basics", 350);
    original.display();

    std::cout << "\n=== 2. COPY CONSTRUCTOR ===\n";

    Book copie = original;

    std::cout << "Inainte de modificare:\n";
    original.display();
    copie.display();

    copie.setPages(500);

    std::cout << "Dupa modificarea copiei:\n";
    original.display();
    copie.display();

    std::cout << "\n=== 3. MOVE CONSTRUCTOR ===\n";

    Book mutata = std::move(copie);

    std::cout << "Obiectul destinatie:\n";
    mutata.display();

    std::cout << "Obiectul sursa dupa move:\n";
    copie.display();

    std::cout << "\n=== 4. DESTRUCTOR ===\n";
    std::cout << "Obiectele vor fi distruse automat.\n";

    return 0;
}