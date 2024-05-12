// simple public single level inheritance
#include <iostream>
using namespace std;

class Parent
{
    private:
        int someVariable;
    public : 
        void getValue(void)
        {
            cout << "enter value for someVar : ";
            cin >> someVariable;
        }

        void showName(void)
        {
            cout << "printing from parent class" << endl;
        }
};

class Child : public Parent
{
    private:
        int someOtherVar;
    public:
        void getValue(void)
        {
            cout << "enter value for the child's var : ";
            cin >> someOtherVar;
        }
};

int main()
{
    Parent p;
    Child c;

    p.getValue();
    p.showName();

    // child uses its function under same name inherited from parent
    // function defined in child class is used (overriding)
    c.getValue();
    // inherits showName function from the parent
    c.showName();

    return 0;
}