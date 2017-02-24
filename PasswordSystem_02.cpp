//////////////////////////////////////////////////////////////////////////////////////////////
// File:  "PasswordSystem_02.cpp"
//
// Related Header File: "PasswordSystem02_Header.h"
//
// Original Author: Jeferson M. Soler
//
// Creation Date: February 23, 2017
//
// Purpose: This program is the second password string system program.
//////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>

#include "PasswordSystem02_Header.h"

/**************/
/* Prototypes */
/**************/
Password PrototypePassword;

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
  PrototypePassword.InputPassword();
  PrototypePassword.StringPassword();
  PrototypePassword.SubStringPassword();

  cout << "Thank you!\n";
  cin.get();

  return 0;
}