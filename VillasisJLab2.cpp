// Author Joshua Villasis
// CPSC 121 Lab 2
// 09/10/2018

#include <iostream>
using namespace std;

int main()
{
// Initialize Variables
double quiz;
double labWork;
double midTerm;
double finalExam;
double participation;
double overall;

// List categories and respective percentages
cout << "Quizzes = 10%\n";
cout << "Labwork = 35%\n";
cout << "Midterm = 15%\n";
cout << "Final = 30%\n";
cout << "Participation = 10%\n\n";

//Ask user to input average grade of each category
cout << "In the order listed above,\n";
cout << "input the average grade (0 - 100) of each category:\n";
cout << "If a certain category does not apply, use \'-1\' \n\n";

//User inputs average grade of Quizzes
cout << "Quizzes: ";
cin >> quiz;
if (quiz == -1){
  quiz = 0;
}

//User inputs average grade of Labwork
cout << "Labwork: ";
cin >> labWork;
if (labWork == -1){
  labWork = 0;
}

//User inputs average grade of Midterm
cout << "Midterm: ";
cin >> midTerm;
if (midTerm == -1){
  midTerm = 0;
}

//User inputs average grade of Final
cout << "Final: ";
cin >> finalExam;
if (finalExam == -1){
  finalExam = 0;
}

//User inputs average grade of Participation
cout << "Participation: ";
cin >> participation;
if (participation == -1){
  participation = 0;
}

// Calculate points for each category
quiz *= .10;
labWork *= .35;
midTerm *= .15;
finalExam *= .3;
participation *= .1;

// Find overall percentage
overall = (quiz + labWork + midTerm + finalExam + participation);
cout << "Overall Percentage: " <<overall <<"%\n";

//Find the appropriate letter grade
// A: 100 - 90
if (overall >= 90 && overall <= 100)
  cout << "Letter Grade: A\n";
// B: 89 - 80
else if (overall >= 80 && overall <= 89)
  cout << "Letter Grade: B\n";
// C: 79 - 70
else if (overall >= 70 && overall <= 79)
  cout << "Letter Grade: C\n";
// D: 69 - 60
else if (overall >= 60 && overall <= 69)
  cout << "Letter Grade: D\n";
// F: Lower than 59
else if (overall < 60)
  cout << "Letter Grade: F\n";
// Impssible: ensure user did not get an impossible percentage
else
  cout << "It is impossible to get such a percentage\n";

return 0;
}
