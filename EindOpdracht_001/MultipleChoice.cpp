#include "MultipleChoice.h"

MultipleChoice::MultipleChoice(std::string aQuestion, std::list<std::string> anAnswer, int aCorrect, int aPoint)
{
	int options[sizeof(anAnswer)];

	for (int i = 0; i < sizeof(options); i++)
	{
		options[i] = i;
	}

	question = aQuestion;
	answers = anAnswer;
	points = aPoint;

	correctOne = CheckCorrectAnswer(options, aCorrect);
	ShowQuestionAndOptions(question, answers, points);

	while (input == NULL)
	{
		input = InputChoice(answers);
	}

	correct = CorrectOrNah(InputChoice(answers), options, correctOne);

	if (correct)
	{
		CorrectMessage("Your answer is correct.", points);
	}
	else
	{
		IncorrectMessage("Your answer is incorrect. The correct answer was: ", answers, correctOne);
	}
}

MultipleChoice::~MultipleChoice()
{

}

int MultipleChoice::CheckCorrectAnswer(int anOption[], int aCorrect)
{
	if (aCorrect < sizeof(anOption)) {
		return aCorrect;
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

char MultipleChoice::InputChoice(std::list<std::string> anAnswer)
{
	std::cin >> choice;

	for (int i = 0; i < sizeof(anAnswer); i++)
	{
		if (choice[0] == (char)(i + ASCII_CAPITAL_START_DEC) || choice[0] == (char)(i + ASCII_LOWER_START_DEC))
		{
			return choice[0];
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
			}
		}

		if (choiceInt == aCorrect)
		{
			return true;
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
