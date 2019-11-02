#pragma once
#include <string>
#include <list>
#include <iostream>

class IntroOutro
{
  public:
	  IntroOutro(std::list<std::string> aSentence);
	  ~IntroOutro();

	  void GetInfo(std::list<std::string> aSentence);

  private:
	  std::list<std::string> sentence;
};

