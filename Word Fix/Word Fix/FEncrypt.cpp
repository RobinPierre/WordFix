#include "FEncrypt.h"

void FEncrypt::execute(string& phrase)
{
	for (unsigned int i = 0; i < phrase.size(); i++)
	{
		if (phrase[i] == 'a')
			phrase.replace(i, 1, 1, '9');
		else if (phrase[i] == 'e')
			phrase.replace(i, 1, 1, '8');
		else if (phrase[i] == 'i')
			phrase.replace(i, 1, 1, '1');
		else if (phrase[i] == 'o')
			phrase.replace(i, 1, 1, '0');
		else if (phrase[i] == 'u')
			phrase.replace(i, 1, 1, '2');

	}
}
