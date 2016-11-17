#include "UCaseFactory.h"
#include "FUpperCase.h"

IFilter *UCaseFactory::NewFilter()
{
	return new FUpperCase;
}