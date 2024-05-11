#include <iostream>
using namespace std;

class Parent
{
    private : 
        int a, b;
    public : 
        void getValues(int first, int second);
        void putValues(void)
        {
            cout << "a : " << a << endl << "b : " << b << endl;
        }
};

void Parent::getValues(int first, int second)
{
    a = first;
    b = second;
}

int main()
{
    Parent p1;
    p1.getValues(10, 20);
    p1.putValues();
    return 0;
}