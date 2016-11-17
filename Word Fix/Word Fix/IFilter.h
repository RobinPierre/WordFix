
#ifndef IFILTER_H
#define IFILTER_H
#include <string>

using namespace std;
 class IFilter
{
public:
	virtual void execute(string&) = 0;
	virtual ~IFilter() {}
};
#endif