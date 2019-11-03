#pragma once
#include <string>
#include <list>
#include <iostream>

class OpenQuestion
{
  public:
	  OpenQuestion(std::list<std::string> aQuestion);
	  ~OpenQuestion();

	  void GetQuestion(std::string aQuestion);
	  bool SetVoluntarySelfService();
	  int SetQuestionAmount();
	  int SetCorrectAnswer(int amount);

	  std::list<char> SetQuestion();
	  std::list<std::string> SetOptions(int amount);

	  const int POINTS = 5;

	  bool correct;

  private:
	  std::list<char>::iterator playerIt;
	  std::list<std::string>::iterator questionsIt;

	  std::string playerQuestionNormalString;
	  std::list<std::string> questions;
	  std::list<char> playerQuestion;
	  std::list<std::string> options;

	  int correctOne;
	  int optionAmount;
	  bool choice;
};

