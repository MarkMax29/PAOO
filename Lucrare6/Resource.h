
#ifndef RESOURCE_H
#define RESOURCE_H

#include <string>

class Resource {
private:
    std::string name_;

public:
    explicit Resource(const std::string& name);

    ~Resource();

    void use() const;
};

#endif
