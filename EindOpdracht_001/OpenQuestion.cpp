#include "OpenQuestion.h"
#include "MultipleChoice.h"

OpenQuestion::OpenQuestion(std::list<std::string> aQuestion)
	:questions(aQuestion)
{
	questionsIt = questions.begin();
	playerQuestionNormalString = "";

	GetQuestion(*questionsIt);
	choice = SetVoluntarySelfService();
	questionsIt++;

	if (choice)
	{
		GetQuestion(*questionsIt);
		optionAmount = SetQuestionAmount();
		questionsIt++;
	}

	if ((choice) && (optionAmount != NULL))
	{
		GetQuestion(*questionsIt);
		playerQuestion = SetQuestion();
		questionsIt++;

		GetQuestion(*questionsIt);
		options = SetOptions(optionAmount);
		questionsIt++;
	}

	if ((choice) && (optionAmount != NULL) && (sizeof(options) > optionAmount))
	{
		GetQuestion(*questionsIt);
		correctOne = SetCorrectAnswer(optionAmount);
	}

	if ((choice) && (optionAmount != NULL) && (correctOne != NULL))
	{
		MultipleChoice* OwnQuestion;

		for (playerIt = playerQuestion.begin(); playerIt != playerQuestion.end(); playerIt++)
		{
			playerQuestionNormalString += (*playerIt);
		}

		std::cout << std::endl;
		OwnQuestion = new MultipleChoice(playerQuestionNormalString, options, (correctOne - 1), POINTS);
		correct = OwnQuestion->correct;
		delete OwnQuestion;
	}
	else if (choice)
	{ 
		if (optionAmount == NULL)
		{
			std::cout << "There appears to be no answers to this question." << std::endl << "We do not ask questions which could not be answered." << std::endl << std::endl;
		}
		else if (correctOne == NULL)
		{
			std::cout << "There appears to be no correct answer to this question." << std::endl << "We do not ask questions which could not be answered." << std::endl << std::endl;
		}
		
	}
}

OpenQuestion::~OpenQuestion()
{

}

void OpenQuestion::GetQuestion(std::string aQuestion)
{
	std::cout << aQuestion << std::endl;
}

bool OpenQuestion::SetVoluntarySelfService()
{
	std::string anAnswer;
	std::cin >> anAnswer;
	std::cout << std::endl;

	if (anAnswer[0] == (char)89 || anAnswer[0] == (char)121)
	{
		return true;
	}

	return false;
}

int OpenQuestion::SetQuestionAmount()
{
	std::string amountInput;
	int amount;

	std::cin >> amountInput;
	std::cout << std::endl;

	amount = std::atoi(amountInput.c_str());

	if (amount > 0) {
		return amount;
	}

	return NULL;
}

int OpenQuestion::SetCorrectAnswer(int amount)
{
	std::string correctInput;
	int aCorrect;

	std::cout << "Option number ";
	std::cin >> correctInput;
	std::cout << std::endl;

	aCorrect = std::atoi(correctInput.c_str());

	if (aCorrect <= amount && aCorrect > 0)
	{
		return aCorrect;
	}

	return NULL;
}

std::list<char> OpenQuestion::SetQuestion()
{
	std::list<char> aQuestion;
	std::list<char>::iterator i;

	aQuestion.resize(1);

	for (i = aQuestion.begin(); i != aQuestion.end() && *i != '?'; i++)
	{
		std::cin >> *i;
		aQuestion.push_back(*i);
	}
	aQuestion.push_back('?');
	std::cout << std::endl;

	return aQuestion;
}

std::list<std::string> OpenQuestion::SetOptions(int amount)
{
	std::string fillOption;
	std::string::iterator optIt;
	std::list<std::string> anOption;

	for (int i = 0; i < amount; i++)
	{
		std::cout << "Option #" << (i + 1) << ": ";
		std::cin >> fillOption;
		anOption.push_back(fillOption);
	}
	std::cout << std::endl;

	return anOption;
}
