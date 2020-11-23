#include "user_io.h"
#include <iostream>
#include <cstdio>

// Function to get a string from user input
string userinput(const string request) {
    string s;
    cout << request << " ";
    getline(cin, s);
    return s;
}

// Function to get an integer from user input
int userinput_int(const string request) {
    int v;
    string s;
    do {
        s = userinput(request);
    } while (sscanf(s.c_str(), "%d", &v) < 1);
    return v;
}

// Function to get a floating-point number (double) from user input
double userinput_double(const string request) {
    double v;
    string s;
    do {
        s = userinput(request);
    } while (sscanf(s.c_str(), "%lf", &v) < 1);
    return v;
}

// Function to get a boolean from user input
bool userinput_yesno(const string request) {
    string s = userinput(request + " (y/n)");
    if (s.substr(0, 1) == "Y" || s.substr(0, 1) == "y" ||
        s.substr(0, 1) == "J" || s.substr(0, 1) == "j")
        return true;
    else
        return false;
}

