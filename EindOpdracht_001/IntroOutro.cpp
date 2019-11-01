#include "IntroOutro.h"

IntroOutro::IntroOutro(std::list<std::string> sentence)
{
	std::list<std::string>::iterator i;
	int j;

	for (i = sentence.begin(); i != sentence.end(); i++)
	{
		j = std::distance(sentence.begin(), i);
		std::cout << *i << std::endl;
	}

	std::cout << std::endl;
}

IntroOutro::~IntroOutro()
{

}
