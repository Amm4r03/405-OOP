#include <iostream>
#include <string>

// Base class representing physical properties
class Father {
protected:
    int height;
    float weight;
public:
    Father(int h, float w) : height(h), weight(w) {}

    void displayPhysicalProperties() {
        std::cout << "Physical Properties - Height: " << height << " cm, Weight: " << weight << " kg" << std::endl;
    }
};

// Derived class representing intellectual features
class Grandfather {
protected:
    int IQ;
    std::string activeness;
public:
    Grandfather(int iq, const std::string& active) : IQ(iq), activeness(active) {}

    void displayIntellectualFeatures() {
        std::cout << "Intellectual Features - IQ: " << IQ << ", Activeness: " << activeness << std::endl;
    }
};

// Derived class representing Raju inheriting both physical properties from Father and intellectual features from Grandfather
class Raju : public Father, public Grandfather {
public:
    Raju(int h, float w, int iq, const std::string& active)
        : Father(h, w), Grandfather(iq, active) {}

    void displayInheritedFeatures() {
        displayPhysicalProperties();
        displayIntellectualFeatures();
    }
};

int main() {
    Raju raju(180, 75.5, 140, "Very active");

    std::cout << "Raju's Features (Accessed by Friend):\n";
    raju.displayInheritedFeatures();

    return 0;
}
