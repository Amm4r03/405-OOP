#include <iostream>
using namespace std;

int sumOfDigits(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main()
{
    cout << "enter a number : ";
    int a;
    cin >> a;
    cout << "the sum of digits of " << a << " is : " << sumOfDigits(a) << endl;
    return 0;
}