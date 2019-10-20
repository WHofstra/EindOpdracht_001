#pragma once
#include <string>
#include <list>
#include <iostream>

class MultipleChoice
{
  public:
	  MultipleChoice(std::string aQuestion, std::list<std::string> anAnswer, int aCorrect);
	  ~MultipleChoice();

	  void ShowQuestionAndOptions(std::string aQuestion, std::list<std::string> anAnswer);
	  int InputChoice();
	  bool CorrectOrNah(char aChoice, std::list<int> anOption, int aCorrect);

  private:
	  std::string question;
	  std::list<std::string> answers;
	  std::string choice;

	  int correctOne;
};

