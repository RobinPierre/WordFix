#ifndef FLOWERCASE_H
#define FLOWERCASE_H
#include "IFilter.h"
class FLowerCase : public IFilter
{
public:
	void IFilter::execute(string&);
};

#endif