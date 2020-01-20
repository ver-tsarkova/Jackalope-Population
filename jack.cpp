/* 
Student ID: @00194989
Filename: jack.cpp
Assignment: HW7: Jackalope Populations    
Description: A program that calculates population growth of jackalopes.      
*/ 

#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
  const double BIRTH_RATE = 0.03, DEATH_RATE = 0.01;
  int jackalopes, generations;
  double jackalopesIncrease, totalJackalopes; 
  char userChoice;
  
  do
  {
    cout << "\nHow many jackalopes do you have? ";
    cin >> jackalopes;
    cout << "How many generations do you want to wait? ";
    cin >> generations;
    
    for (int i = 1; i <= generations; i++)
    {
      jackalopesIncrease = static_cast<int>((jackalopes * BIRTH_RATE) * generations + jackalopes);
      totalJackalopes = static_cast<int>(jackalopesIncrease - static_cast<int>(jackalopesIncrease * DEATH_RATE) * generations);
    }
    cout << "If you start with " << jackalopes << " jackalopes and wait " << generations 
         << " generations, " << endl << "you'll end up with a total of " << totalJackalopes << " of them."; 
    cout << "\n\nDo you want to calculate another population? ";
    cin >> userChoice;
  } while (tolower(userChoice) == 'y'); 
  return 0;
}

/* 
[vtsarkov@hills cs110a]$ g++ jack.cpp
[vtsarkov@hills cs110a]$ ./a.out

How many jackalopes do you have? 200
How many generations do you want to wait? 1
If you start with 200 jackalopes and wait 1 generations,
you'll end up with a total of 204 of them.

Do you want to calculate another population? y

How many jackalopes do you have? 132
How many generations do you want to wait? 2
If you start with 132 jackalopes and wait 2 generations,
you'll end up with a total of 137 of them.

Do you want to calculate another population? y

How many jackalopes do you have? 40
How many generations do you want to wait? 100
If you start with 40 jackalopes and wait 100 generations,
you'll end up with a total of 60 of them.

Do you want to calculate another population? n
*/ 
