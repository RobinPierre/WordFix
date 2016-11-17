#ifndef IFACTORY_H
#define IFACTORY_H
#include "IFilter.h"

class IFactory
{
public:
	virtual IFilter* NewFilter() = 0;
	virtual ~IFactory() {}
};
#endif // !IFACTORY_H
