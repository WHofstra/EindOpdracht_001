#pragma once
#include <string>
#include <list>
#include <iostream>

class Leaderboard
{
    public:
		Leaderboard();
		~Leaderboard();

		int SetNewScore(int aCurrentScore, int aPointAmount, bool aCorrect);
		void GetShowLeaderboard(std::list<int> aScoreList, std::list<std::string> aNameList);
		int GetCurrentScore();
		void SetPlayerName();
		void SetNewScoreLeaderBoard(int aScore);
		void ResetScore();
		void ResetName();

		std::list<std::string> names;
		std::list<int> scores;

		std::string name;
		int score;

    private:
		//const int MAX_AMOUNT_POINTS = 59;

		//std::list<std::string> leadingNames;
		//std::list<int> leadingScores;
};

