
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
protected:
    std::string name_;

public:
    explicit Customer(const std::string& name);

    Customer(const Customer& other);

    Customer& operator=(const Customer& other);

    void display() const;
};

#endif
