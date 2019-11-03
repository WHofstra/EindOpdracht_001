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

	  std::list<std::string> SetQuestion();
	  std::list<std::string> SetOptions(int amount);

  private:
	  std::list<std::string>::iterator questionsIt;
	  std::list<std::string>::iterator playerIt;

	  std::list<std::string> questions;
	  std::list<std::string> playerQuestion;
	  std::list<std::string> optionsNormalString;
	  std::list<std::string> options;
	  //std::list<std::list<std::string>> options;
	  std::string playerQuestionNormalString;

	  int correctOne;
	  int optionAmount;
	  bool choice;
};

