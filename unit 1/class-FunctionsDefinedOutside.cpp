// code for a class with functions defined in the class as well as outside the class

#include <iostream>
using namespace std;

class testing
{
    int pr, cst;

    public:
    void getData(int price, int cost);

    void display(void){
        cout << pr << ' / ' << cst << '\n';
    }
};

void testing::getData(int price, int cost){
    pr = price;
    cst = cost;
    return;
}

int main()
{
    testing a;
    a.getData(10, 20);
    a.display();
    return 0;
}