#include "FUpperCase.h"

void FUpperCase::execute(string& phrase)
{
	for (unsigned int i = 0; i < phrase.size(); i++)
		phrase.replace(i, 1, 1, toupper(phrase[i]));
}
