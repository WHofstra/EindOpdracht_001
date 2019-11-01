// EindOpdracht_001.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "MultipleChoice.h"
#include "IntroOutro.h"

int main()
{
	int score = 0;
	
	new IntroOutro({ "Your knowledge about Bionicle will be tested in this quiz.",
		             "This quiz is all about the G1-sets (Generation 1, 2001-2010) and the lore surrounding it.",
		             "The maximum amount of points you can score is 32. Good luck."});

	new MultipleChoice("In the very beginning, before Bionicle became a LEGO theme all of its own, it was part of another LEGO theme.\nWhich LEGO theme was this series part of at first?", 
		             { "LEGO Hero Factory", "LEGO Exo-Force", "LEGO Technic", "LEGO Znap" }, 2, 3);

	new IntroOutro({ "Thank you for answering all questions and adding your own question.",
					 "Have a nice day, and live by these wise words:",
					 "\"Unity. Duty. Destiny.\"" });

	exit(0);
}
