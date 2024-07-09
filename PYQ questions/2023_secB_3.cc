// function overriding

#include <iostream>
using namespace std;

class Animal {
    public : 
        virtual void sound() {
            cout << "animal makes a sound\n";
        }
};

class Dog : public Animal {
    public :
        void sound() override {
            cout << "the dog barks\n";
        }
};

int main() {
    Animal* anim;
    Animal a;
    Dog d;
    anim = &a;
    anim->sound();
    anim = &d;
    anim->sound();
    return 0;
}