
#include "Resource.h"

#include <iostream>

Resource::Resource(const std::string& name)
    : name_(name)
{
    std::cout << "Resource created: " << name_ << '\n';
}

Resource::~Resource()
{
    std::cout << "Resource destroyed: " << name_ << '\n';
}

void Resource::use() const
{
    std::cout << "Using resource: " << name_ << '\n';
}
