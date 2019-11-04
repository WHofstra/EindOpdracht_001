#include "Leaderboard.h"

Leaderboard::Leaderboard()
{
	score = 0;
}

Leaderboard::~Leaderboard()
{
	score = 0;
}

int Leaderboard::SetNewScore(int aCurrentScore, int aPointAmount, bool aCorrect)
{
	int newScore;

	if (aCorrect)
	{
		newScore = aCurrentScore + aPointAmount;
	}
	else
	{
		newScore = aCurrentScore;
	}

	return newScore;
}

void Leaderboard::GetShowLeaderboard(std::list<int> aScoreList, std::list<std::string> aNameList)
{
	std::list<int>::iterator scoreIt;
	std::list<std::string>::iterator playIt;

	//int j;
	//int previousScore = 0;

	playIt = aNameList.begin();

	/*leadingScores.clear();
	leadingScores.resize(aScoreList.size());

	leadingNames.clear();
	leadingNames.resize(aNameList.size());

	for (scoreIt = aScoreList.begin(); scoreIt != aScoreList.end(); scoreIt++)
	{
		//j = std::distance(aScoreList.begin(), scoreIt);
		if (*scoreIt > previousScore)
		{
				leadingScores.push_front(*scoreIt);
				leadingNames.push_front(*playIt);
		}
		else
		{
				leadingScores.push_back(*scoreIt);
				leadingNames.push_back(*playIt);
		}
		playIt++;

		previousScore = *scoreIt;
	}

	playIt = leadingNames.begin();*/

	std::cout << "Leaderboard:" << std::endl << " Name:" << (char)9 << "Score:" << std::endl << " -----" << (char)9 << "------" << std::endl;
	for (scoreIt = aScoreList.begin(); scoreIt != aScoreList.end(); scoreIt++)
	{
		std::cout << " " << *playIt << (char)9 << *scoreIt << std::endl;
		playIt++;
	}
	std::cout << std::endl;
}

int Leaderboard::GetCurrentScore()
{
	return score;
}

void Leaderboard::SetPlayerName()
{
	std::string input;

	std::cout << "What is your name?" << std::endl;
	std::cin >> input;
	std::cout << std::endl;

	if (input.size() >= 6) {
		for (int i = 0; i < 6; i++)
		{
			name += input[i];
		}
	}
	else
	{
		for (int i = 0; i < input.size(); i++)
		{
			name += input[i];
		}
	}

	names.push_back(name);
}

void Leaderboard::SetNewScoreLeaderBoard(int aScore)
{
	scores.push_back(aScore);
}

void Leaderboard::ResetScore()
{
	score = 0;
}

void Leaderboard::ResetName()
{
	name = "";
}
