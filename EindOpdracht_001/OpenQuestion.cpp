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

	if ((choice) && (optionAmount > 0))
	{
		GetQuestion(*questionsIt);
		playerQuestion = SetQuestion();
		questionsIt++;

		GetQuestion(*questionsIt);
		options = SetOptions(optionAmount);
		questionsIt++;

		GetQuestion(*questionsIt);
		correctOne = SetCorrectAnswer(optionAmount);

		for (playerIt = playerQuestion.begin(); playerIt != playerQuestion.end(); playerIt++)
		{
			playerQuestionNormalString += (*playerIt + " ");
		}

		std::cout << std::endl;
		new MultipleChoice(playerQuestionNormalString, options, (correctOne - 1), 5);
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
	int amount;
	std::cin >> amount;
	std::cout << std::endl;

	return amount;
}

int OpenQuestion::SetCorrectAnswer(int amount)
{
	int aCorrect;
	std::cout << "Option number ";
	std::cin >> aCorrect;
	std::cout << std::endl;

	if (aCorrect <= amount && aCorrect > 0)
	{
		return aCorrect;
	}

	return NULL;
}

std::list<std::string> OpenQuestion::SetQuestion()
{
	std::list<std::string> aQuestion;
	std::list<std::string>::iterator i;

	for (i = aQuestion.begin(); i != aQuestion.end(); i++)
	{
		std::cin >> *i;
	}
	std::cout << std::endl;

	return aQuestion;
}

std::list<std::string> OpenQuestion::SetOptions(int amount)
{
	std::string fillOption;
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
