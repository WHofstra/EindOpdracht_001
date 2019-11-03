#pragma once
#include <string>
#include <list>
#include <iostream>

class ResetButton
{
    public:
		ResetButton();
		~ResetButton();

		void GetOutput(std::string anInput);

    private:
		std::string input;
};

