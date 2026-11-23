
#ifndef PRIORITY_CUSTOMER_H
#define PRIORITY_CUSTOMER_H

#include "Customer.h"

class PriorityCustomer : public Customer {
private:
    int priority_;

public:
    PriorityCustomer(const std::string& name, int priority);

    PriorityCustomer(const PriorityCustomer& other);

    PriorityCustomer& operator=(const PriorityCustomer& other);

    void display() const;
};

#endif
