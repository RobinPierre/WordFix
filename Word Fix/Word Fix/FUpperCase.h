#ifndef FUPPERCASE_H
#define FUPPERCASE_H
#include "IFilter.h"
class FUpperCase : public IFilter
{
public:
	void IFilter::execute(string&);
};
#endif