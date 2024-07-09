#include <iostream>
using namespace std;

float add(double n1, double n2) {
    return n1 + n2;
}

int add(int n1, int n2) {
    return n1 + n2;
}

int subtract(int n1, int n2) {
    return n1 - n2;
}

float subtract(double n1, double n2) {
    return n1 - n2;
}

int main() {
    cout << "floating point number addition : " << add(2.1, 2.2) << endl;
    cout << "integer number addition : " << add(1, 2) << endl;
    cout << "integer number subtraction : " << subtract(10, 9) << endl;
    cout << "floating point number subtraction : " << subtract(9.5, 3.2) << endl;
    return 0;
}