#ifndef INTERACTIVEFIX_H
#define INTERACTIVEFIX_H
#include "IFactory.h"

#include <string>
using namespace std;


class InteractiveFix
{
public:
	InteractiveFix();
	InteractiveFix(IFactory*);//Constructs with the factory type then saves a created new filter
	void DoInteractiveSession();//applies filter to word on input
	~InteractiveFix();

private:
	IFilter *myFilter;
	string word;
};

#endif // !INTERACTIVEFIX_H