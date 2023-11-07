#include <iostream>
using namespace std;

// Base class (parent class)
class Animal {
private:
    string species;

public:
    Animal(const string& species) : species(species) {
        cout << "Animal constructor" << endl;
    }

    // Destructor for the base class
    ~Animal() {
        cout << "Animal destructor" << endl;
    }

    void eat() {
        cout << "The " << species << " is eating." << endl;
    }

    void sleep() {
        cout << "The " << species << " is sleeping." << endl;
    }
};

// Derived class (child class)
class Dog : public Animal {
private:
    string name;

public:
    Dog(const string& name) : Animal("Dog"), name(name) {
        cout << "Dog constructor" << endl;
    }

    // Destructor for the derived class
    ~Dog() {
        cout << "Dog destructor" << endl;
    }

    void bark() {
        cout << name << " the dog is barking." << endl;
    }
};

int main() {
    // Create an instance of the derived class
    Dog myDog("Buddy");

    // Access methods from the base class
    myDog.eat();
    myDog.sleep();

    // Access methods from the derived class
    myDog.bark();

    return 0;
}
