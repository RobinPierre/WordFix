#include "FilterMgr.h"
#include "EncryptFactory.h"
#include "LCaseFactory.h"
#include "UCaseFactory.h"

FilterMgr::FilterMgr()
{
}


IFactory* FilterMgr::selectFilter(string phrase)
{
	IFactory* filterPtr = NULL;
	
	if (phrase == "uppercase")
		filterPtr = new UCaseFactory;
	else if (phrase == "lowercase")
		filterPtr = new LCaseFactory;
	else if (phrase == "encrypt")
		filterPtr = new EncryptFactory;
	return filterPtr;
}
string FilterMgr::getChoices()
{
	string output = "\tuppercase\n\tlowercase\n\tencrypt";
	return output;
}