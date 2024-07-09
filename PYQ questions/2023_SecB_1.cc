#include <iostream>
using namespace std;

class P {
    public :
        void print() {
            cout << "inside P";
        }
};

class Q : public P {
    public : 
        void print() {
            cout << "inside Q";
        }
};

class R : public Q {
};

int main() {
    R r;
    r.print();
    return 0;
}

// output : 
// inside Q