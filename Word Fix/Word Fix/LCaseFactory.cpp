#include "LCaseFactory.h"
#include "FLowerCase.h"

IFilter *LCaseFactory::NewFilter()
{
	return new FLowerCase;
}