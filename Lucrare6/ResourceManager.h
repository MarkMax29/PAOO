
#ifndef RESOURCE_MANAGER_H
#define RESOURCE_MANAGER_H

#include "Resource.h"

#include <memory>
#include <string>

class ResourceManager {
private:
    std::unique_ptr<Resource> resource_;

public:
    explicit ResourceManager(const std::string& name);

    ResourceManager(const ResourceManager&) = delete;
    ResourceManager& operator=(const ResourceManager&) = delete;

    ResourceManager(ResourceManager&& other) noexcept = default;
    ResourceManager& operator=(ResourceManager&& other) noexcept = default;

    void use() const;
};

#endif
