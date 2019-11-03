#include "ResetButton.h"

ResetButton::ResetButton()
{
	std::cout << "Type \'Quit\' or \'Q\' to quit." << std::endl << "Press any other key to redo the quiz." << std::endl;
	std::cin >> input;
	GetOutput(input);
}

ResetButton::~ResetButton()
{

}

void ResetButton::GetOutput(std::string anInput)
{
	if (anInput[0] == (char)81 || anInput[0] == (char)113) {
		exit(0);
	}
}
