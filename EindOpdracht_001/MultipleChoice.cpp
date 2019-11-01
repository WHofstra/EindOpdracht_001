#include "MultipleChoice.h"

MultipleChoice::MultipleChoice(std::string aQuestion, std::list<std::string> anAnswer, int aCorrect, int aPoint)
	:question(aQuestion), answers(anAnswer), correctOne(aCorrect), points(aPoint)
{
	int options[sizeof(answers)];

	for (int i = 0; i < sizeof(answers); i++)
	{
		options[i] = i;
	}

	correctOne = CheckCorrectAnswer(options, correctOne);
	ShowQuestionAndOptions(question, answers, points);
	
	std::cin >> choice;

	input = InputChoice(answers, choice);
	correct = CorrectOrNah(input, options, correctOne);

	if (correct)
	{
		CorrectMessage("Your answer is correct.", points);
	}
	else
	{
		IncorrectMessage("Your answer is incorrect. The correct answer was: ", answers, correctOne);
	}

	std::cout << std::endl;
}

MultipleChoice::~MultipleChoice()
{

}

int MultipleChoice::CheckCorrectAnswer(int anOption[], int aCorrectInput)
{
	if (aCorrectInput < sizeof(anOption)) {
		return aCorrectInput;
	}

	return NULL;
}

void MultipleChoice::ShowQuestionAndOptions(std::string aQuestion, std::list<std::string> anAnswer, int aPoint)
{
	std::list<std::string>::iterator i;
	int j;

	std::cout << aQuestion << " (" << aPoint << " points)" << std::endl;

	for (i = anAnswer.begin(); i != anAnswer.end(); i++)
	{
		j = std::distance(anAnswer.begin(), i);
		std::cout << "(" << (char)(j + ASCII_CAPITAL_START_DEC) << ".) " << *i << std::endl;
	}
}

char MultipleChoice::InputChoice(std::list<std::string> anAnswer, std::string aChoice)
{
	for (int i = 0; i < sizeof(anAnswer); i++)
	{
		if (aChoice[0] == (char)(i + ASCII_CAPITAL_START_DEC) || aChoice[0] == (char)(i + ASCII_LOWER_START_DEC))
		{
			return aChoice[0];
		}
	}

	std::cout << "Pick one of the options below:" << std::endl;

	return NULL;
}

bool MultipleChoice::CorrectOrNah(char aChoice, int anOption[], int aCorrect)
{
	int choiceInt;

	if (aChoice != NULL && aCorrect != NULL) {
		for (int i = 0; i < sizeof(anOption); i++) {
			if (aChoice == (char)(i + ASCII_CAPITAL_START_DEC) || aChoice == (char)(i + ASCII_LOWER_START_DEC))
			{
				choiceInt = anOption[i];

				if (choiceInt == aCorrect)
				{
					return true;
				}
			}
		}
	}

	return false;
}

void MultipleChoice::CorrectMessage(std::string aMessage, int aPoint)
{
	std::cout << aMessage << " (+" << aPoint << " points)" << std::endl;
}

void MultipleChoice::IncorrectMessage(std::string aMessage, std::list<std::string> anAnswer, int aCorrect)
{
	std::list<std::string>::iterator i;
	int j;
	
	for (i = anAnswer.begin(); i != anAnswer.end(); i++)
	{
		j = std::distance(anAnswer.begin(), i);
		if (j == aCorrect)
		{
			std::cout << aMessage << *i << std::endl;
		}
	}
}
