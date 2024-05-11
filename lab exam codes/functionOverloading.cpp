// demonstration of function overloading in cpp
// multiple functions with same name but different signatures


#include <iostream>
using namespace std;

int calcArea(int sideLength)
{
    return sideLength * sideLength;
}

int calcArea(int length, int width)
{
    return length * width;  
}

double calcArea(double radius)
{
    return 3.14 * radius * radius;
}

int main()
{
    int side = 5;
    int length = 10;
    int width = 4;
    double radius = 4;

    cout << "area of square : " << calcArea(side) << endl;
    cout << "area of rectangle : " << calcArea(length, width) << endl;
    cout << "area of circle : " << calcArea(radius) << endl;

    return 0;
}