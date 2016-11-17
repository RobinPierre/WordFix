#ifndef FILTERMGR_H
#define FILTERMGR_H

#include <string>
using namespace std;
class IFactory;


class FilterMgr
{
public:
	FilterMgr();
	virtual ~FilterMgr() {}
	IFactory* selectFilter(string);
	string getChoices();
};

#endif  