// simple implementation of a bubble sort on int vector

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void bubbleSort(vector <int> &nums)
{
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int size;
    cout << "enter the size of the array : ";
    cin >> size;
    vector <int> numbers(size);

    for (int i = 0; i < size; i++)
    {
        cout << "enter value for member " << i + 1 << " of the array : ";
        cin >> numbers[i];
    }

    cout << "the array received is as follows\narray : ";

    for (int number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;

    cout << "the sorted array is as follows\narray : ";
    bubbleSort(numbers);

    for(int number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}