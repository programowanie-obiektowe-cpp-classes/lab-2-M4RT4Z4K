#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
    ResourceManager(const Resource& X) {
	}
	double get() { return X.get; }
};
