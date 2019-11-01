#pragma once
#include <string>
#include <list>
#include <iostream>

class MultipleChoice
{
  public:
	  MultipleChoice(std::string aQuestion, std::list<std::string> anAnswer, int aCorrect, int aPoint);
	  ~MultipleChoice();

	  int CheckCorrectAnswer(int anOption[], int aCorrect);
	  void ShowQuestionAndOptions(std::string aQuestion, std::list<std::string> anAnswer, int aPoint);
	  char InputChoice(std::list<std::string> anAnswer);
	  bool CorrectOrNah(char aChoice, int anOption[], int aCorrect);

	  void CorrectMessage(std::string aMessage, int aPoint);
	  void IncorrectMessage(std::string aMessage, std::list<std::string> anAnswer, int aCorrect);

  private:
	  const int ASCII_CAPITAL_START_DEC = 65;
	  const int ASCII_LOWER_START_DEC = 97;

	  std::string question;
	  std::list<std::string> answers;
	  std::string choice;

	  int correctOne;
	  int points;
	  char input;
	  bool correct;
};