// prints the multiplication table of a number input from user

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << num * i << '\n'; 
    }
    return 0;
}