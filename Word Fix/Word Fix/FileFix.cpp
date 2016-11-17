#include "FileFix.h"
#include <fstream>
#include <iostream>
using namespace std;


FileFix::FileFix(IFactory * fact)
{
	myFactory = fact;
}

void FileFix::ConvertFile(string filename)
{
	string txt = ".txt";
	string fix = ".fix";
	string filename1 = filename;
	string filename2 = filename;
	string buffer;
	IFilter *filter = myFactory->NewFilter();
	ifstream iFile(filename1.append(txt));//name of file on instantiation
	ofstream oFile(filename2.append(fix));
	
	if (iFile.is_open() && oFile.is_open())
	{
		
		while (getline(iFile, buffer))
		{
			filter->execute(buffer);
			oFile << buffer << endl;
		}

	}
	else
		cout << "Can't open file " << filename << endl;
	iFile.close();
	oFile.close();
	
}

FileFix::~FileFix()
{
}
