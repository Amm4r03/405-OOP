// code to demonstrate the usage of friend functions

#include <iostream>
using namespace std;

class MyClass
{
    private : 
        int num;
    public : 
        MyClass() : num(0) {}

        friend void showNum(MyClass object);

        void setNum(int n)
        {
            num = n;
        }
};

void showNum(MyClass object)
{
    cout << "the number is " << object.num << endl;
}

int main()
{
    MyClass obj1;
    obj1.setNum(10);
    showNum(obj1);  
    return 0;
}