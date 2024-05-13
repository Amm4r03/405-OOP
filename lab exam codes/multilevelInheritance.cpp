// code to demonstrate multilevel inheritance

#include <iostream>
using namespace std;

// define the parent class
class Animal
{
    public : 
        void tellType(void)
        {
            cout << "i am an animal" << endl;
        }
};

// create the child class to inherit features from the parent (Animal) class
class Dog : public Animal
{
    public : 
        void bark()
        {
            cout << "dog is barking" << endl;
        }
};

// create the grandchild class to inherit features from the parent (Dog) class
class Labrador : public Dog
{
    public : 
        void breed()
        {
            cout << "this is a labrador" << endl;
        }
};

int main()
{
    // create an object of the grandchild class
    Labrador d1;

    // call the inherited functions of parent and grandparent class from the child class
    d1.tellType();
    d1.bark();
    d1.breed();
     
    return 0;
}