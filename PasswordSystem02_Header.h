//////////////////////////////////////////////////////////////////////////////////////////////
// File:  "PasswordSystem02_Header.h"
//
// Related Source File: "PasswordSystem02_Source.cpp"
//
// Original Author: Jeferson M. Soler
//
// Creation Date: February 23, 2017
//
// Purpose: This file contains a class with functions that will be used in the program.
//////////////////////////////////////////////////////////////////////////////////////////////

#ifndef _PASSWORDSYSTEM02_HEADER_H_
#define _PASSWORDSYSTEM02_HEADER_H_

// Main class definition for Password.
class Password {
  // The data members.
  private:
    // String variable for password input.
    string str;

  // The class functions, the constructor, and the destructor.
  public:
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
    Password(void);
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
    ~Password(void);

    //////////////////////////////////////////////////////////////////////////////////////////
    // Function: "InputPassword"
    //
    // Last Modified: February 23, 2017
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
    void InputPassword(void);

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
    void StringPassword(void);

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
    void SubStringPassword(void);
};

#endif
