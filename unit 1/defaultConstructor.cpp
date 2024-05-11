#include <iostream>
using namespace std;

class Si
{
    int profit, time;
    float rate;
    public : 
        Si()
        {
            profit = 0;
            time = 0;
            rate = 0.0;
        }

        Si(int a, int b, float c)
        {
            profit = a;
            time = b;
            rate = c;
        }

        void calcInterest()
        {
            float interest;
            interest = (profit * time * rate) / 100;
            cout << "simple interest = " << interest;
        }
};

int main()
{
    Si i1(12000, 4, 6.2);
    i1.calcInterest();
    return 0;
}