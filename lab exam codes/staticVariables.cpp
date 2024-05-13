// code to demonstrate usage of static functions and variables

#include <iostream>
using namespace std;

class MyClass
{
    private : 
        static int someStaticVariable;
        int a;
    public : 
        static int getStaticVariable(void)
        {
            return someStaticVariable;
        }

        void printA(void)
        {
            cout << a << endl;
        }

        static void setStaticVariable(int b)
        {
            someStaticVariable = b;
        }

        void getA(int n)
        {
            a = n;
        }
};

int MyClass :: someStaticVariable = 10;

int main()
{
    MyClass :: setStaticVariable(20);           // remove this line and static variable's val will be 10
    cout << MyClass::getStaticVariable() << endl;

    MyClass a1;
    a1.getA(1);
    a1.printA();
    return 0;
}
