// demonstrates the use of new and delete keywords for mem alloc

#include <iostream>
using namespace std;

int main()
{
    // dynamically allocate space for an integer
    int *ptr = new int;

    if (ptr == nullptr)
    {
        cout << "memory allocation failed" << endl;
        return -1;
    }

    *ptr = 101;

    cout << "dynamically allocated integer : " << *ptr << " at location " << ptr << endl;

    delete ptr;
    ptr = nullptr;

    return 0;
}