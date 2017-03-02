//////////////////////////////////////////////////////////////////////////////////////////////
// File:  "StringClass.h"
//
// Related Source File: "StringClass.cpp"
//
// Original Author: Jeferson M. Soler
//
// Creation Date: February 26, 2017
//
// Purpose: This file contains a class with functions that will be used in the program.
//////////////////////////////////////////////////////////////////////////////////////////////

#ifndef _STRINGCLASS_H_
#define _STRINGCLASS_H_

// Main class definition for Password.
class StringClass {
  // The data members.
  private:
    // String variable for password input.
    string str;

  // The class functions, the constructor, and the destructor.
  public:
    //////////////////////////////////////////////////////////////////////////////////////////
    // Function: "StringClass()"
    //
    // Last Modified: February 26, 2017
    //
    // Input:   N/A
    //
    // Output:  N/A
    //
    // Return:  N/A
    //
    // Purpose: This function is the constructor.
    //////////////////////////////////////////////////////////////////////////////////////////
    StringClass(void);
    //////////////////////////////////////////////////////////////////////////////////////////
    // Function: "~StringClass()"
    //
    // Last Modified: February 26, 2017
    //
    // Input:   N/A
    //
    // Output:  N/A
    //
    // Return:  N/A
    //
    // Purpose: This function serves as a destructor.  It also frees the memory space.
    //////////////////////////////////////////////////////////////////////////////////////////
    ~StringClass(void);

    //////////////////////////////////////////////////////////////////////////////////////////
    // Function: "StringInput"
    //
    // Last Modified: March 2, 2017
    //
    // Input:   N/A
    //
    // Output:  str  The inputted string value.
    //
    // Return:  N/A
    //
    // Purpose: This function obtains the input for the string.
    //////////////////////////////////////////////////////////////////////////////////////////
    void StringInput(void);

    //////////////////////////////////////////////////////////////////////////////////////////
    // Function: "StringFunction"
    //
    // Last Modified: February 26, 2017
    //
    // Input:   N/A
    //
    // Output:  str  The updated string value.
    //
    // Return:  N/A
    //
    // Purpose: This function is used to remove all spaces and non-alphabet characters
    //          that are present within the current string.
    //////////////////////////////////////////////////////////////////////////////////////////
    void StringFunction(void);

    //////////////////////////////////////////////////////////////////////////////////////////
    // Function: "SubstringFunction"
    //
    // Last Modified: February 26, 2017
    //
    // Input:   N/A
    //
    // Output:  str        The current string value.
    //          strSub_01  The first half of the string as the first substring.
    //          strSub_02  The second half of the string as the second substring.
    //
    // Return:  N/A
    //
    // Purpose: This function is used to create the substrings of the current string
    //          value if an upper case alphabet is present.
    //
    // Note:    If there's more than one upper case alphabet within the string, then only
    //          the first detected upper case alphabet will be used to determine if the
    //          substrings will be formed.  If the substrings are formed, then the upper
    //          case alphabet(s) in the second substring will become lower case alphabet(s).
    //////////////////////////////////////////////////////////////////////////////////////////
    void SubstringFunction(void);
};

#endif
