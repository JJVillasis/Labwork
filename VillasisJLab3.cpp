// Author: Joshua Villasis
// CPSC 121 Lab 3
// 09/17/2018

#include <iostream>
#include <string>
using namespace std;

// Create drawing function prototypes
void drawRectangle(int, int);
void drawRectangle (string, int);
void drawTriangle (int, bool);
void drawTriangle (string, bool);

int main(){
  // Ask user whether the want to draw a rectangle or a triangle
  cout << "Would you like to draw a rectagle or a triangle (r/t)?\n";
  char shapeType;
  cin >> shapeType;


  // User inputs 'R' to Draw a triangle
  if (shapeType == 'r')
  {
    int rectWidth;
    string rectTerm;
    int rectHieght;

    // Ask User if they want to use a width or a certain term
    cout << "Would you like to input a width or a term (w/t)?\n";
    char rectType;
    cin >> rectType;

    // User inputs hieght of rectangle
    if(rectType == 'w')
    {
      cout << "Input width of rectangle:\n";
      cin >> rectWidth;

      // User inputs hieght of rectangle
      cout << "Input hieght of rectangle:\n";
      cin >> rectHieght;

      // Call drawRectangle with Argument rectWidth
      drawRectangle(rectWidth, rectHieght);
    }
    //User inputs word to draw rectangle
    else if (rectType == 't')
    {
      // User inputs word to draw
      cout << "Input word to draw rectangle:\n";
      cin >> rectTerm;

      // User inputs hieght of rectangle
      cout << "Input hieght of rectangle:\n";
      cin >> rectHieght;

      // Call drawRectangle with argument rectTerm
      drawRectangle(rectTerm, rectHieght);
    }

  }

  // User inputs 't' to draw a triangle
  else if (shapeType == 't')
  {
    int triWidth;
    string triTerm;
    bool triPointingUp;

    // Ask User if they want to use a width or a certain term
    cout << "Would you like to input a width or a term (w/t)?\n";
    char triType;
    cin >> triType;

    // User inputs width of a triangle
    if(triType == 'w')
    {
      cout << "Input width of triangle:\n";
      cin >> triWidth;

      // Ask user if the triangle is pointing up or down
      cout << "Is the triangle pointing up (0/1)?\n";
      cin >> triPointingUp;

      drawTriangle(triWidth, triPointingUp);
    }

    // User inputs term to draw a triangle
    if(triType == 't')
    {
      cout << "Input term to drawing triangle:\n";
      cin >> triTerm;

      // Ask user if the triangle is pointing up or down
      cout << "Is the triangle pointing up (0/1)?\n";
      cin >> triPointingUp;

      drawTriangle(triTerm, triPointingUp);
    }
  }

  return 0;
}
 // Create function to draw a rectangle
void drawRectangle (int width, int hieght)
{
  cout << "\n";
  for (int y = 0; y < hieght; y++)
  {
    for (int x = 0; x < width; x++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}

void drawRectangle (string term, int hieght)
{
  cout << "\n";
  for (int y = 0; y < hieght; y++)
  {
    cout << term << "\n";
  }
}

void drawTriangle (int width, bool pointingUp)
{
  cout << "\n";
  if (pointingUp == 1)
  {
    for (int y = 0; y < width; y++)
    {
      for(int x = 0; x <= y; x++)
      {
        cout << "*";
      }
      cout << "\n";
    }
  }

  else
  {
    for (int y = 0; y < width; y++)
    {
      for (int x = 4; x >= y; x--)
      {
        cout << "*";
      }
      cout << "\n";
    }
  }
}

void drawTriangle (string term, bool pointingUp)
{
  cout << "\n";
  if (pointingUp == 1)
  {
    for (int y = term.length(); y > 0; y--)
    {
      cout << term.substr(y-1);
      cout << "\n";
    }
  }
}
