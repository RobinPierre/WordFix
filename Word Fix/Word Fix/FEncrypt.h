#ifndef FENCRYPT_H
#define FENCRYPT_H
#include "IFilter.h"
class FEncrypt : public IFilter
{
public:
	void IFilter::execute(string&);
};

#endif