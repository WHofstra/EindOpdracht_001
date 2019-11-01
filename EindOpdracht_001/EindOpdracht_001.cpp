// EindOpdracht_001.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "MultipleChoice.h"
#include "IntroOutro.h"

int main()
{
	std::list<std::string> nameList;
	std::list<int> leaderboard;
	int score = 0;
	
	new IntroOutro({ "Your knowledge about Bionicle will be tested in this quiz.",
		             "This quiz is all about the G1-sets (Generation 1, 2001-2010) and the lore surrounding it.",
		             "The maximum amount of points you can score is 50. Good luck."});

	new MultipleChoice("In the very beginning, before Bionicle became a LEGO theme all of its own, it was part of another LEGO theme.\nWhich LEGO theme was this series part of at first?", 
		             { "LEGO Hero Factory", "LEGO Exo-Force", "LEGO Technic", "LEGO Znap" }, 2, 3);

	new MultipleChoice("What were the first sets to be released back in 2001?",
		             { "Toa Inika", "Piraka", "Toa Nuva", "Toa Mata", "Takanuva" }, 3, 2);

	new MultipleChoice("What are wild animals called in the Matoran Universe?",
		             { "Spinax", "Rahi", "Rahaga", "Nocturn", "Turaga" }, 1, 3);

	new MultipleChoice("What was the first island on which the Toa Mata washed ashore?",
		             { "Mata Nui", "Metru Nui", "Bara Magna", "Voya Nui"}, 0, 2);

	new MultipleChoice("The greatest evil force in the Matoran Universe had a name according to the lore.\nWhat was this being called?",
		             { "Great Rode", "Protodermis", "Lewa Nuva", "Makuta Teridax", "Great Kanohi"}, 3, 3);

	new MultipleChoice("Who were the visious enemies who were in control of Metru Nui as an totalitarian force to be reckoned with?\nThey often captured innocent Matoran who dared to rebel.\nTheir sets were sold with the catchphrase: \"Surrender or Run.\"",
		             { "Toa Hordika", "Vahki", "Visorak", "Rahaga" }, 1, 2);

	new MultipleChoice("A catchphrase that is often used by the Toa goes as follows:",
		             { "\"In a Time Before Time...\"", "\"Gravity Hurts.\"", "\"Unity. Duty. Destiny.\"", "\"The Gang is On The Loose.\"" }, 2, 2);

	new MultipleChoice("The Bionicle wear masks to grant them certain powers.\nWhat are these masks called in the Matoran Universe?",
		             { "Kardas", "Pridak", "Kanohi", "Turaga" }, 2, 3);

	new MultipleChoice("What was the tool used by the Piraka and Toa Inika to shoot projectiles?",
		             { "Zamor Launchers", "Kanoka Discs", "Cordak Blasters", "Squid Lauchers", "Rhotuka Spinners", "Thornax Launchers" }, 0, 3);

	new MultipleChoice("And what would be the tool used by the Visorak and Toa Hordika to shoot their projectiles?",
		             { "Zamor Launchers", "Kanoka Discs", "Cordak Blasters", "Squid Lauchers", "Rhotuka Spinners", "Thornax Launchers" }, 4, 3);

	new MultipleChoice("Which Titan of a Bionicle is known to possess the great Kanohi called: \'Olmak\'?\nThis mask grants the wearer the ability to create dimensional gates, thus its nickname: \'Mask of Dimensional Gates\'",
		             { "Fenrakk", "Tahnok Va", "Axonn", "Nuju", "Brutaka" }, 4, 5);

	new MultipleChoice("Before the Rahaga's physical appearance and abilities came to resemble that of Rahkshi, they used to be Toa.\nWhat was their alias during their time of guardianship?",
		             { "Toa Cordak", "Toa Metru", "Toa Volitak", "Toa Hagah" }, 3, 3);
					 
	new IntroOutro({ "Thank you for answering all questions and adding your own question.",
					 "Have a nice day, and live by these wise words:",
					 "\"Unity. Duty. Destiny.\"" });

	exit(0);
}
