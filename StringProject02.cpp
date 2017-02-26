//////////////////////////////////////////////////////////////////////////////////////////////
// File:  "StringProject02.cpp"
//
// Related Header File: "StringClass.h"
//
// Original Author: Jeferson M. Soler
//
// Creation Date: February 26, 2017
//
// Purpose: This program is the second string project program.
//////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>

#include "StringClass.h"

/**************/
/* Prototypes */
/**************/
StringClass StringValue;

/************/
/* Internal */
/************/

//////////////////////////////////////////////////////////////////////////////////////////
// Our primary routine.  This is called when the program starts.
//
// Return: We always return 0.
//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
  StringValue.StringInput();
  StringValue.StringFunction();
  StringValue.SubstringFunction();

  cout << "Thank you!\n";
  cin.get();

  return 0;
}