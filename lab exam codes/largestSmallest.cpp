// take input for array from user and return the smallest and largest number in that array to console

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "enter the size of the array : ";
    cin >> size;
    vector <int> numbers(size);

    for (int i = 0; i < size; i++)
    {
        cout << "enter the value for member "<< i + 1 << " of the array : ", i + 1;
        cin >> numbers[i];
    }

    cout << "the array received is as follows : ";
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    auto max = max_element(numbers.begin(), numbers.end());
    int largest = *max;

    auto min = min_element(numbers.begin(), numbers.end());
    int smallest = *min;

    cout << "the largest number in this array is : " << largest << endl;
    cout << "the smallest number in this array is : " << smallest << endl;
    return 0;
}