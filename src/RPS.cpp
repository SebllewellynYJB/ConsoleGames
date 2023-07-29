#include <iostream>
// Option Variables
const char Rock = 'r';
const char Paper = 'p';
const char Scissors = 's';


char ComputerChoice()
{
  srand(time_t(0));
  //Sets the number between 1 and 10
  int num = rand() % 3 +1;

  if(num == 1)return 'r';
  if(num == 2) return 'p';
  if(num == 3) return 's';
}

char PlayerOption()
{
  char C;
  std::cout << "Welcome to RPS game" << std::endl;
  std::cout <<"Choose either R,P or S as your answer" << std::endl;
  std::cin >> C;
  return C;
}

void Options(char option)
{
  //Shows the 3 options for the games
  if (option == 'r') std::cout << "Rock" << std::endl;
  if (option == 'p') std::cout << "Paper" << std::endl;
  if (option == 's') std::cout << "Scissors" << std::endl;
}

void ChooseWinner(char PChoice, char CChoice)
{
  if (PChoice == Rock & CChoice == Paper)
  {
    std::cout << "Computer wins as Paper beats Rock" << std::endl;
  }
  else if(PChoice == Paper & CChoice == Scissors)
  {
   std::cout <<"Computer wins as Scissors beats Paper" << std::endl;
  }
  else if(PChoice == Scissors & CChoice == Rock)
  {
    std::cout <<"Computer win as Rock beats Scissors" << std::endl;
  }
  else if (PChoice == Paper & CChoice == Rock)
  {
    std::cout <<"Player wins as Paper beats Rock" << std::endl;
  }
  else if (PChoice == Scissors & CChoice == Paper)
  {
    std::cout <<"Player wins as Scissors beats Paper" << std::endl;
  }
  else if (PChoice == Rock & CChoice == Scissors)
  {
    std::cout <<"Player wins as Rock beats Scissors" << std::endl;
  }
  else
    {
      std::cout<<"Tie Game"<<std::endl;
    }
}

int main()
{
  char PChoice;
  PChoice = PlayerOption();
  Options(PChoice);
  char CChoice;
  CChoice = ComputerChoice();
  Options(CChoice);
  ChooseWinner(PChoice, CChoice);


  return 0;
}

// Aspects of the code was taken from this website
//https://www.mycplus.com/source-code/cplusplus-source-code/rock-paper-scissors-game-in-c/