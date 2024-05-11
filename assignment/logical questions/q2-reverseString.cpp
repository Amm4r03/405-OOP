#include <iostream>
using namespace std;

void reverseString(string &s)
{
    int length = s.length();
    for (int i = 0; i < (int) length / 2; i++)
    {
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
}

int main()
{
    cout << "enter a string : ";
    string user;
    cin >> user;
    cout << "your input : " << user << endl;
    
    reverseString(user);

    cout << "reversed string : " << user << endl; 
    return 0;
}