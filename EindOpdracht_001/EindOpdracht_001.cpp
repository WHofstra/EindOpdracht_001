// EindOpdracht_001.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "MultipleChoice.h"
#include "IntroOutro.h"
#include "OpenQuestion.h"
#include "Leaderboard.h"
#include "ResetButton.h"

int main()
{
	MultipleChoice* Question;
	OpenQuestion* PlayersOwn;
	Leaderboard* Board = new Leaderboard();

	while (true)
	{
		new IntroOutro({ "Your knowledge about Bionicle will be tested in this quiz.",
					     "This quiz is all about the G1-sets (Generation 1, 2001-2010) and the lore surrounding it.",
					     "The maximum amount of points you can score in this quiz is 59. Good luck." });
		
		Question = new MultipleChoice("In the very beginning, before Bionicle became a LEGO theme all of its own, it was part of another LEGO theme.\nWhich LEGO theme was this series part of at first?",
			                        { "LEGO Hero Factory", "LEGO Exo-Force", "LEGO Technic", "LEGO Znap" }, 2, 3);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;

		Question = new MultipleChoice("What were the first sets to be released back in 2001?",
						            { "Toa Inika", "Piraka", "Toa Nuva", "Toa Mata", "Takanuva" }, 3, 2);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;

		Question = new MultipleChoice("What are wild animals called in the Matoran Universe?",
						            { "Spinax", "Rahi", "Rahaga", "Nocturn", "Turaga" }, 1, 3);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;
		
		Question = new MultipleChoice("What was the first island on which the Toa Mata washed ashore?",
						            { "Mata Nui", "Metru Nui", "Bara Magna", "Voya Nui"}, 0, 2);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;
		
		Question = new MultipleChoice("The greatest evil force in the Matoran Universe had a name according to the lore.\nWhat was this being called?",
						            { "Great Rode", "Protodermis", "Lewa Nuva", "Makuta Teridax", "Great Kanohi"}, 3, 3);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;

		Question = new MultipleChoice("Who were the visious enemies who were in control of Metru Nui as an totalitarian force to be reckoned with?\nThey often captured innocent Matoran who dared to rebel.\nTheir sets were sold with the catchphrase: \"Surrender or Run.\"",
						            { "Toa Hordika", "Vahki", "Visorak", "Rahaga" }, 1, 2);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;

		Question = new MultipleChoice("A catchphrase that is often used by the Toa goes as follows:",
						            { "\"In a Time Before Time...\"", "\"Gravity Hurts.\"", "\"Unity. Duty. Destiny.\"", "\"The Gang is On The Loose.\"" }, 2, 2);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;

		Question = new MultipleChoice("Who were the very first servants of Makuta Teridax?",
						            { "Bohrok", "Rahkshi", "Barraki", "Bohrok Va" }, 0, 2);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;

		Question = new MultipleChoice("The Barraki had an certain slogan which is also used as a phrase in a song by Cryoshell.\nWhat is the Barraki\'s own slogan?",
						            { "Federation of Fear", "Sisters of the Skrall", "Ta-Koro of Mahri Nui", "Creeps from the Deep" }, 3, 3);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;

		Question = new MultipleChoice("The Bionicle wear masks to grant them certain powers.\nWhat are these masks called in the Matoran Universe?",
						            { "Kardas", "Pridak", "Kanohi", "Turaga" }, 2, 3);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;

		Question = new MultipleChoice("What was the tool used by the Piraka and Toa Inika to shoot projectiles?",
						            { "Zamor Launchers", "Kanoka Discs", "Cordak Blasters", "Squid Lauchers", "Rhotuka Spinners", "Thornax Launchers" }, 0, 3);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;

		Question = new MultipleChoice("And what would be the tool used by the Visorak and Toa Hordika to shoot their projectiles?",
						            { "Zamor Launchers", "Kanoka Discs", "Cordak Blasters", "Squid Lauchers", "Rhotuka Spinners", "Thornax Launchers" }, 4, 3);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;

		Question = new MultipleChoice("The Toa Mahri had to fend off different types of foes to keep \'The Mask of Life\' save.\nAmong those foes was a big blue Rahi with long sharp teeth.\nWhat is the name of this creature?",
						            { "Vezon", "Gadunka", "Umbra", "Maxilos", "Keetongu" }, 1, 2);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;

		Question = new MultipleChoice("Which Titan of a Bionicle is known to possess the great Kanohi called: \'Olmak\'?\nThis mask grants the wearer the ability to create gates to other dimensions, thus its nickname: \'Mask of Dimensional Gates\'",
						            { "Fenrakk", "Tahnok Va", "Axonn", "Nuju", "Brutaka" }, 4, 5);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;

		Question = new MultipleChoice("Before the Rahaga's physical appearance and abilities came to resemble that of Rahkshi, they used to be Toa.\nWhat was their alias during their time of guardianship?",
						            { "Toa Cordak", "Toa Metru", "Toa Volitak", "Toa Hagah" }, 3, 3);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;

		Question = new MultipleChoice("The Piraka sets came with a few extra featured parts to make them look more menacing.\nDo you know what kind of featured parts?",
						            { "Organic Kanohi and glowing weapons", "Glowing eyes and glow-in-the-dark teeth", "Extra glowing eyes and bigger armor",
						              "Scarier Kanohi with better powers", "Golden Rhotuka Spinners and glow-in-the-dark teeth" }, 1, 3);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;

		Question = new MultipleChoice("How did the Toa Inika came to be?",
						            { "By lightning emitting from a Red Star passing by", "By a Matoran Transforming Ritual performed by The Great Beings",
						              "By a corrupted Zamor Sphere from former Skakdi", "By the harsh training provided by the Elder Turaga of Voya Nui" }, 0, 5);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;
		
		Question = new MultipleChoice("Which part of Metru Nui contains the element of ice and contains gigantic icy pillars called \'The Knowledge Towers\'?",
						            { "Onu-Metru", "Le-Metru", "Ko-Metru", "Ta-Metru" }, 2, 5);
		Board->score = Board->SetNewScore(Board->score, Question->points, Question->correct);
		delete Question;
		
		PlayersOwn = new OpenQuestion({ "Do you want to add your own question? (Type \'Yes\' or \'No\'.)",
						                "How many options can a person choose from this question?",
						                "What would you like your question to be? (Remember: \'Questions end with a question mark.\')",
						                "Could you type out the options to pick from?\n(Keep in mind that you type one word at a time or use \'_\' to distinguish words.)\nDo not use the spacebar!",
						                "Which of these options is the correct answer?" });
		Board->score = Board->SetNewScore(Board->score, PlayersOwn->POINTS, PlayersOwn->correct);
		delete PlayersOwn;
		
		Board->SetNewScoreLeaderBoard(Board->score);
		Board->SetPlayerName();
		Board->GetShowLeaderboard(Board->scores, Board->names);
		Board->ResetScore();
		Board->ResetName();

		new IntroOutro({ "Thank you for answering all questions. I hope you enjoyed this little quest for knowledge.",
						 "Have a nice day, and live by these wise words:",
						 "\"Unity. Duty. Destiny.\"" });

		new ResetButton();
	}
}
