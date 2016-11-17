#ifndef FILEFIX_H
#define FILEFIX_H
#include "IFactory.h"
#include <string>

class FileFix
{
public:
	FileFix(IFactory*); //Constructs with the factory type
	void ConvertFile(string);//takes input from .txt file and place filtered text in .fix file
	~FileFix();
private:
	IFactory *myFactory;
	string file;
};
#endif