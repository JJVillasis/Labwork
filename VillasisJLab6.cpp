// Author: Joshua Villasis
// CPSC 121 Lab 6
// 11/05/2018

#include <iostream>
#include <string>
using namespace std;

struct Calculator {
    long long LHValue;
    long long * RHValue;
    char lastOperator;
};

//Create Function prototypes
void processInput(Calculator*, string);


int main()
{
  // g++ -std=c++14
  long long total = 0;

  Calculator cal;
  cal.LHValue = 10;
  cal.RHValue = new long long;
  long long t = 0;
  cal.RHValue = &t;
  cal.lastOperator = '+';

  string test = "+5";
  processInput(&cal, test);

  string te = "=";
  processInput(&cal, te);
  processInput(&cal, te);
  processInput(&cal, te);
  processInput(&cal, te);
  processInput(&cal, te);


return 0;
}


void processInput(Calculator *calc, string userInput)
{
  if (isdigit(userInput[0]))
  {
    cout << userInput;
  }

  else if (userInput[0] == '+' || userInput[0] == '-'|| userInput[0] == '*'||
           userInput[0] == '/'|| userInput[0] == '%')
  {
    *(calc->RHValue) = stoll(userInput.substr(1));
    //cout << userInput.substr(1,userInput.length()-2);
    char op = userInput[0];
    switch(op)
    {
      case '+': {calc->LHValue += *(calc->RHValue);
                calc->lastOperator = '+';
                cout << "\nTest: " << calc->LHValue << "\n\n";
                break;}

      case '-': {calc->LHValue -= *(calc->RHValue);
                calc->lastOperator = '-';
                cout << "\nTest: " << calc->LHValue << "\n\n";
                break;}

      case '*': {calc->LHValue *= *(calc->RHValue);
                calc->lastOperator = '*';
                cout << "\nTest: " << calc->LHValue << "\n\n";
                break;}

      case '/': {calc->LHValue /= *(calc->RHValue);
                calc->lastOperator = '/';
                cout << "\nTest: " << calc->LHValue << "\n\n";
                break;}

      case '%': {calc->LHValue %= *(calc->RHValue);
                calc->lastOperator = '%';
                cout << "\nTest: " << calc->LHValue << "\n\n";
                break;}

    }

  }

  else if (userInput[0] == '=')
  {
    char op = calc->lastOperator;
    switch(op)
    {
      case '+': {calc->LHValue += *(calc->RHValue);
                calc->lastOperator = '+';
                cout << "\nTest: " << calc->LHValue << "\n\n";
                break;}

      case '-': {calc->LHValue -= *(calc->RHValue);
                calc->lastOperator = '-';
                cout << "\nTest: " << calc->LHValue << "\n\n";
                break;}

      case '*': {calc->LHValue *= *(calc->RHValue);
                calc->lastOperator = '*';
                cout << "\nTest: " << calc->LHValue << "\n\n";
                break;}

      case '/': {calc->LHValue /= *(calc->RHValue);
                calc->lastOperator = '/';
                cout << "\nTest: " << calc->LHValue << "\n\n";
                break;}

      case '%': {calc->LHValue %= *(calc->RHValue);
                calc->lastOperator = '%';
                cout << "\nTest: " << calc->LHValue << "\n\n";
                break;}

    }
  }

}
