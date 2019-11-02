#pragma once
#include <string>
#include <list>
#include <iostream>

class MultipleChoice
{
  public:
	  MultipleChoice(std::string aQuestion, std::list<std::string> anAnswer, int aCorrect, int aPoint);
	  ~MultipleChoice();

	  int SetCorrectAnswer(int anOption[], int aCorrectInput);
	  void GetQuestionAndOptions(std::string aQuestion, std::list<std::string> anAnswer, int aPoint);
	  char SetPlayerChoice(std::list<std::string> anAnswer, std::string aChoice);
	  bool GetCorrectAnswer(char aChoice, int anOption[], int aCorrect);

	  void GetCorrectMessage(std::string aMessage, int aPoint);
	  void GetIncorrectMessage(std::string aMessage, std::list<std::string> anAnswer, int aCorrect);

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