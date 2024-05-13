#include <iostream>
using namespace std;

class Car
{
    public : 
        void printCarFeatures()
        {
            cout << "this has the engine of a car" << endl;
        }
};

class Truck
{
    public :
        void printTruckFeatures()
        {
            cout << "this has the wheels of a truck" << endl;
        }
};

class NewVehicle : public Car, public Truck
{
    public : 
        void printNature()
        {
            cout << "this is a new vehicle" << endl;
        }
};

int main()
{
    NewVehicle v1;
    v1.printCarFeatures();
    v1.printTruckFeatures();
    v1.printNature();
    return 0;
}