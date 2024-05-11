// some utility functions that ive written
#include <iostream>
using namespace std;

#pragma once
#ifndef utilityFunctions_HPP
#define utilityFunctions_HPP

string reverseString(string s)
{
    int length = s.length();

    if (length == 0 || length == 1)
    {
        return s;
    }

    for (int i = 0; i < (int) length / 2; i++)
    {
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
    return s;
}

#endif utilityFunctions_HPP