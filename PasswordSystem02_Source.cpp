//////////////////////////////////////////////////////////////////////////////////////////////
// File:  "PasswordSystem02_Source.cpp"
//
// Related Header File: "PasswordSystem02_Header.h"
//
// Original Author: Jeferson M. Soler
//
// Creation Date: February 23, 2017
//
// Purpose: This file specifies what each function from the Password class is supposed to do.
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

/**********/
/* Public */
/**********/

//////////////////////////////////////////////////////////////////////////////////////////
// Function: "Password()"
//
// Last Modified: February 24, 2017
//
// Input:   N/A
//
// Output:	N/A
//
// Return:  N/A
//
// Purpose: This function is the constructor.
//////////////////////////////////////////////////////////////////////////////////////////
Password::Password(void) {
  str.clear();
}

//////////////////////////////////////////////////////////////////////////////////////////
// Function: "~Password()"
//
// Last Modified: February 24, 2017
//
// Input:   N/A
//
// Output:  N/A
//
// Return:  N/A
//
// Purpose: This function serves as a destructor.  It also frees the memory space.
//////////////////////////////////////////////////////////////////////////////////////////
Password::~Password(void) {
  str.clear();
}

//////////////////////////////////////////////////////////////////////////////////////////
// Function: "InputPassword"
//
// Last Modified: February 24, 2017
//
// Input:   N/A
//
// Output:  str   The entered string value for the password.
//
// Return:  N/A
//
// Purpose: This function is used to enter and obtain the string value for the
//          password.
//////////////////////////////////////////////////////////////////////////////////////////
void Password::InputPassword(void) {
  // While the string is empty, keep on requesting for a password.
  cout << "Before inputting a password, remember that the password will break into two\n";
  cout << "substrings after removing all spaces and non-alphabet characters and if there\n";
  cout << "is, at least, one upper case letter in the middle of the password.\n\n";
  while (str.empty()) {
    cout << "Input a password: ";
    getline(cin, str);

    // If the string is not empty, then break from the while loop.
    if (!str.empty()) {
      break;
    }
  }
}

//////////////////////////////////////////////////////////////////////////////////////////
// Function: "StringPassword"
//
// Last Modified: February 24, 2017
//
// Input:   N/A
//
// Output:  str         The updated string value for the password.
//          strSub_01   The first half of the string as the first substring.
//          strSub_02   The second half of the string as the second substring.
//
// Return:  N/A
//
// Purpose: This function is used to remove all spaces and non-alphabet characters
//          that are present within the password.
//////////////////////////////////////////////////////////////////////////////////////////
void Password::StringPassword(void) {
  bool no_alpha_only = true;  // Boolean variable that indicates if there are only alphabets within the password.
  
  // Output the original password and the current length of the password.
  cout << str << '\n';
  cout << "Starting Password Length:" << str.size() << '\n';

  // This While loop is used to remove non-alphabetic characters from the password and
  // will stop when the password has only alphabets.
  while (no_alpha_only) {
    // Remove any space that is found within the password.
    for (int i = 0; i < str.size(); i++) {
      if (isspace(str[i])) {
        str.erase(remove_if(str.begin(), str.end(), isspace), str.end());
      }
    }

    // Remove any number that is found within the password.
    for (int i = 0; i < str.size(); i++) {
      if (isdigit(str[i])) {
        str.erase(remove_if(str.begin(), str.end(), isdigit), str.end());
      }
    }

    // Remove any punctuation mark that is found within the password.
    for (int i = 0; i < str.size(); i++) {
      if (ispunct(str[i])) {
        str.erase(remove_if(str.begin(), str.end(), ispunct), str.end());
      }
    }

    // This For loop is used to confirm that there are only alphabets within the password.
    for (int i = 0; i < str.size(); i++) {
      if (!isalpha(str[i])) {
        break;
      }
      else {
        if (i == str.size() - 1) {
          cout << "\nThe password now has only alphabets.\n";
          cout << str << '\n';
          cout << "Password Length:" << str.size() << '\n';
          no_alpha_only = false;
        }
      }
    }
  }
}

//////////////////////////////////////////////////////////////////////////////////////////
// Function: "SubStringPassword"
//
// Last Modified: February 24, 2017
//
// Input:   N/A
//
// Output:  str         The string value for the password if no substrings are created.
//          strSub_01   The first half of the string as the first substring.
//          strSub_02   The second half of the string as the second substring.
//
// Return:  N/A
//
// Purpose: This function is used to create the substrings of the password if an upper
//          case alphabet is present at the middle of the password.
//
// Note:    If there's more than one upper case alphabet within the string, then only
//          the first detected upper case alphabet will be used to determine if the
//          substrings will be formed.  If the substrings are formed, then the upper
//          case alphabet(s) in the second substring will become lower case alphabet(s).
//////////////////////////////////////////////////////////////////////////////////////////
void Password::SubStringPassword(void) {
  string strSub_01;           // String variable for first substring.
  string strSub_02;           // String variable for second substring.

  // This For loop is used to determine the substrings if there's an upper case alphabet present
  // within the string.
  for (int i = 0; i < str.size(); i++) {
    // If there's an upper case alphabet present and the upper case alphabet is not at the beginning of
    // the password, then create two substrings of the password.
    if (isupper(str[i]) && i != 0) {
      size_t pos = str.find(str[i]);    // located position within password input
      strSub_01 = str.substr(0, i);      // part of the password from the beginning up to the set length
      strSub_02 = str.substr(pos);       // part of the password from the location position as starting point

                                         // This For loop is used to make upper case alphabets from the second substring
                                         // into lower case alphabets.
      for (int i = 0; i < strSub_02.size(); i++) {
        if (isupper(strSub_02[i])) {
          strSub_02[i] = tolower(strSub_02[i]);
        }
      }

      // Display the substrings.
      cout << "\nSubstrings were made.\n";
      cout << strSub_01 << '\n';
      cout << "First Substring Length:" << strSub_01.size() << '\n';
      cout << strSub_02 << '\n';
      cout << "Second Substring Length:" << strSub_02.size() << '\n';
      break;
    }
    // If there's an upper case alphabet at the beginning of the password, then don't create substrings
    // of the password.
    else if (isupper(str[i]) && i == 0) {
      // This For loop is used to make upper case alphabets from the string into lower case 
      // alphabets.
      for (int i = 0; i < str.size(); i++) {
        if (isupper(str[i])) {
          str[i] = tolower(str[i]);
        }
      }

      // Display the output.
      cout << "\nNo substrings were made.\n";
      cout << str << '\n';
      cout << "Password Length:" << str.size() << '\n';
      break;
    }
    // If there are no upper case alphabets within the password, then don't create the substrings.
    else if (!isupper(str[i]) && i == str.size() - 1) {
      // Display the output.
      cout << "\nNo substrings were made.\n";
      cout << str << '\n';
      cout << "Password Length:" << str.size() << '\n';
    }
  }
}