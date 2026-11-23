
#include "ResourceManager.h"

#include <iostream>
#include <memory>
#include <utility>

ResourceManager::ResourceManager(const std::string& name)
    : resource_(std::make_unique<Resource>(name))
{
    std::cout << "ResourceManager created\n";
}

void ResourceManager::use() const
{
    if (resource_) {
        resource_->use();
    } else {
        std::cout << "ResourceManager has no resource\n";
    }
}
