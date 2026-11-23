
#include <iostream>
#include <memory>
#include <utility>

#include "Resource.h"
#include "ResourceManager.h"

int main()
{
    // ITEM 13 - with unique_ptr
    std::cout << "===== ITEM 13: UNIQUE_PTR =====\n";

    {
        auto resource1 = std::make_unique<Resource>("File");

        resource1->use();

        std::cout << "Leaving unique_ptr scope...\n";
    }

    std::cout << "Resource automatically destroyed!\n";


    // ITEM 13 - with shared_ptr
    std::cout << "\n===== ITEM 13: SHARED_PTR =====\n";

    {
        auto resource2 = std::make_shared<Resource>("Database");

        std::cout << "Owners: " << resource2.use_count() << '\n';

        {
            auto resource3 = resource2;

            std::cout << "Owners after copy: "
                      << resource2.use_count() << '\n';

            resource3->use();
        }

        std::cout << "Owners after inner scope: "
                  << resource2.use_count() << '\n';
    }


    // ITEM 14 - Resource management and copying
    std::cout << "\n===== ITEM 14: RESOURCE MANAGER =====\n";

    ResourceManager manager1("Network Connection");

    std::cout << "Manager 1:\n";
    manager1.use();

    // Copying is forbidden:
    //ResourceManager copiedmanager2(manager1);
    // ResourceManager manager2 = manager1;


    // Moving ownership
    std::cout << "\nMoving resource to manager2...\n";

    ResourceManager manager2(std::move(manager1));

    std::cout << "Manager 1 after move:\n";
    manager1.use();

    std::cout << "Manager 2 after move:\n";
    manager2.use();


    // Move assignment
    std::cout << "\n===== MOVE ASSIGNMENT =====\n";

    ResourceManager manager3("Temporary Resource");

    manager3 = std::move(manager2);

    std::cout << "Manager 2 after move assignment:\n";
    manager2.use();

    std::cout << "Manager 3 after move assignment:\n";
    manager3.use();

    return 0;
}
