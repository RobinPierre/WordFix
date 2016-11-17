#ifndef ENCRYPTFACTORY_H
#define ENCRYPTFACTORY_H
#include "IFactory.h"

class EncryptFactory : public IFactory
{
public:
	IFilter *NewFilter();
};
#endif // !ENCRYPTFACTORY_H
