#include "FLowerCase.h"

void FLowerCase::execute(string& phrase)
{
	for (unsigned int i = 0; i < phrase.size(); i++)
		phrase.replace(i, 1, 1, tolower(phrase[i]));
}



