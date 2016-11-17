#ifndef LCASEFACTORY_H
#define LCASEFACTORY_H
#include "IFactory.h"

class LCaseFactory : public IFactory
{
public:
	IFilter *NewFilter();
};
#endif // !LCASEFACTORY_H
