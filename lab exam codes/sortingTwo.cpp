// trying selection sort on vectors

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// sorts the input vector using the selection sort algorithm
// and returns the answer in the form of a vector
vector <int> selectionSort(vector <int> &nums)
{
    int size = nums.size();

    vector <int> returnVector;

    int i = 0;

    while (!nums.empty())
    {
        auto smallest = min_element(nums.begin(), nums.end());
        returnVector.push_back(*smallest);
        nums.erase(smallest);
    }
    return returnVector;
}

int main()
{
    int size;
    cout << "enter the size for the array : ";
    cin >> size;

    vector <int> numbers(size);

    for (int i = 0; i < size; i++)
    {
        cout << "enter the value for member " << i + 1 << " of the array : ";
        cin >> numbers[i];
    }
    
    cout << "the array received is as follows\narray : ";

    for (int number : numbers) cout << number << " "; cout << endl;

    cout << "the sorted array is as follows\narray : ";

    numbers = selectionSort(numbers);

    for (int number : numbers) cout << number << " "; cout << endl;

    return 0;
}