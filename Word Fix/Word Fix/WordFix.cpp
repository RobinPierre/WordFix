#include <iostream>
#include "FilterMgr.h"
#include "IFactory.h"
#include "InteractiveFix.h"
#include "FileFix.h"
	

int main()
{
	string filterType;
	string phrase;
	IFactory *factoryPtr;
	FilterMgr *mgr = new FilterMgr;
	string mode;
	FileFix *fFix;
	do
	{
		cout << "Enter your choice of the following filters. (q to quit)" << endl;
		cout << mgr->getChoices() << endl; //prints out possbile filter choises (hard coded)
		cin >> filterType;
		
		if (filterType != "q")
		{
			if ((factoryPtr = mgr->selectFilter(filterType)) == 0)
			{
				cout << "Please check your input and try again." << endl;
				continue;
			}
			do
			{
				cout << "Enter i for an interactive word fix or f to fix an entire file. (q to quit)" << endl;
				cin >> mode;
				if (mode == "i")
					new InteractiveFix(factoryPtr); 
				else if (mode == "f")
				{
					cout << "Enter the name of the input file (in local directory): ";
					cin >> phrase;
					fFix = new FileFix(factoryPtr);
					fFix->ConvertFile(phrase);
				}
				else if (mode != "q")
					cout << "Incorrect input. Please try again." << endl;
			} while (mode != "q");
		}
	} while (filterType != "q");
	
	system("pause");
	return 0;
}