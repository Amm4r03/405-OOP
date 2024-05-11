// creates a class Date with some variables and methods defined in it

#include <iostream>
using namespace std;

class Date
{
    int a, b, c;
    public:
        void getData(int day, int month, int year)
        {
            a = day;
            b = month;
            c = year;
        }
        void display(void)
        {
            cout << "today's date is " << a << '/' << b << '/' << c;
        }
};

int main()
{
    Date today;
    today.getData(28, 02, 2024);
    today.display();
    return 0;
}