// Author: Joshua Villasis
// CPSC 121 Lab 4
// 10/01/2018

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string getInput();
string printBetween(int, int, int step = 1);
string nonalnum_removed(string);
string alphabet_numberfied(string);
int sumDigits(string);
void saveString(string);

int main()
{
  // g++ -std=c++14
  bool exit;
  string main;
  int menu;
  do
  {
    cout << "Current String: "<< main << "\n\n";
    cout << "getInput() = 1\nprintBetween() = 2\nnonalnum_removed() = 3\n";
    cout << "alphabet_numberfied() = 4\nsumDigits() = 5\nsaveString() = 6\n";
    cout << "---------------------------\nWhat would you like to do?\n";
    cin >> menu;

    if(menu == 1)
    {
      cin.ignore();
      main = getInput();
    }

    cout << "\nCurrent String: " << main << "\n\nwould you like to exit (0/1)?\n";
    cin >> exit;
  } while(!exit);


return 0;
}


string getInput()
{
  string input;
  cout << "Enter a string: \n";
  getline(cin, input);

  return input;
}


string printBetween(int a, int b, int step)
{
  string str;
  if(a < b)
  {
    for(int x = a; x <= b; x += step)
    {
      str += to_string(x);
    }
  }

  else
  {
    for(int x = b; x <= a; x += step)
    {
      str += to_string(x);
    }
  }

  return str;
}


string nonalnum_removed(string input)
{
  string str;

  for(int x = 0; x < input.length(); x++)
  {
    if(isalnum(input[x]))
    {
      str += input[x];
    }
  }

  return str;
}


string alphabet_numberfied(string input)
{
  string str;

  for(int x = 0; x < input.length(); x++)
  {
    if(isdigit(input[x]))
    {
      str += input[x];
    }

    else
    {
      int t = input[x];
      str += to_string(t);
    }
  }

  return str;
}


int sumDigits(string digitStr)
{
  int q = 0;

  for(int x = 0; x < digitStr.length(); x++)
  {
    if (isdigit(digitStr[x]))
    {
      q += stoi(digitStr.substr(x,1));
    }

    else
    {
      cout << "\'" << digitStr[x] <<"\' could not be summed up.\n";
    }
  }

  return q;
}


void saveString(string saveString)
{
  ofstream fout;

  fout.open("VillasisJLab4.txt");
  fout << saveString;
  fout.close();
}
