#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
	ResourceManager() { X = new Resource(); }

	ResourceManager(const ResourceManager& MX) {
		X = new Resource();
		*X = *MX.X;
	}

	~ResourceManager() { delete X; }

	double get() { return X->get(); }
	
		ResourceManager& operator=(const ResourceManager& M)
	{
		delete this->X;
		X = new Resource{};
		*X = *M.X;
		return *this;
	}

private:
	Resource* X;
};
