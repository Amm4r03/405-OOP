#include <iostream>
using namespace std;

// take input from user
// reverse input string
// check if input == reversed string

string reverseString(string s)
{
    int length = s.length();
    for (int i = 0; i < (int) length / 2; i++)
    {
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
    return s;
}

int main()
{
    string s;
    cout << "ENTER A STRING : ";
    cin >> s;

    string s2 = reverseString(s);
    if (s == s2)
    {
        cout << s << " is a palindrome." << endl;
    }
    else
    {
        cout << s << " is not a palindrome." << endl;
    }
    return 0;
}