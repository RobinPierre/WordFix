#ifndef UCASEFACTORY_H
#define UCASEFACTORY_H
#include "IFactory.h"

class UCaseFactory : public IFactory
{
public:
	IFilter *NewFilter();
};
#endif // !UCASEFACTORY_H

