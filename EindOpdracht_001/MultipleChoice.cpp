#include "MultipleChoice.h"

MultipleChoice::MultipleChoice(std::string aQuestion, std::list<std::string> anAnswer, int aCorrect)
{
	int options[anAnswer.size];

	question = aQuestion;
	answers = anAnswer;
	correctOne = aCorrect;

	for (int i = 0; i < options.size; i++) {
		options[i] = i;
	}
}

MultipleChoice::~MultipleChoice()
{

}

void MultipleChoice::ShowQuestionAndOptions(std::string aQuestion, std::list<std::string> anAnswer)
{
	std::cout << aQuestion << std::endl;
}

int MultipleChoice::InputChoice()
{
	std::cin >> choice;

	

	return 0;
}

bool MultipleChoice::CorrectOrNah(char aChoice, std::list<int> options, int aCorrect)
{

	return false;
}
