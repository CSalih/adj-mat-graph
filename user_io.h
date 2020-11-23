#ifndef USER_IO_H
#define USER_IO_H

#include <string>

using namespace std;

// Function to get an integer from user input
int userinput_int(const string request);

// Function to get a floating-point number (double) from user input
double userinput_double(const string request);

// Function to get a string from user input
string userinput(const string request);

// Function to get a boolean from user input
bool userinput_yesno(const string request);

#endif // #ifndef USER_IO_H
