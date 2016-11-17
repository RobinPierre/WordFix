#include "InteractiveFix.h"

#include <iostream>
using namespace std;

InteractiveFix::InteractiveFix()
{
}

InteractiveFix::InteractiveFix(IFactory *filter)
{	
	myFilter = filter->NewFilter();
	InteractiveFix::DoInteractiveSession();
}

void InteractiveFix::DoInteractiveSession()
{
	do
	{
		cout << "Please enter a word (q to quit)" << endl;
		cin >> word;
		if (word != "q")
		{
			myFilter->execute(word);
			cout << "Filtered word is: " << word << endl;
		}
		else
			return;
		cout << endl;
	} while (true);
}

InteractiveFix::~InteractiveFix()
{
}
