#include "EncryptFactory.h"
#include "FEncrypt.h"

IFilter *EncryptFactory::NewFilter()
{
	return new FEncrypt;
}