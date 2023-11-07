#include <iostream> 
using namespace std;

class Person {
private:
    int legs;
    int eyes;
    int arms;

public:
    Person(int legs, int eyes, int arms) {
        this->arms = arms;
        this->eyes = eyes;
        this->legs = legs;
    }

    ~Person() {
        cout << "Person object destroyed" << endl;
    }

    int getArms() {
        return arms;
    }

    int getEyes() {
        return eyes;
    }

    int getLegs() {
        return legs;
    }
};

class Learner : public Person {
private:
    string name;
    string sex;

public:
    Learner(string name, string sex) : Person(2, 2, 2), name(name), sex(sex) {
        cout << "Learner constructor" << endl; 
    }

    ~Learner() {
        cout << "Learner object destroyed" << endl;
    }

    int addAll(int arms, int age, int legs) {
        int addedResult = arms + age + legs;
        return addedResult;
    }
};

int main() {
    // Create a Person object
    Person person(2, 2, 2);
    cout << "Person class" << endl;
    cout << "Arms: " << person.getArms() << endl;
    cout << "Legs: " << person.getLegs() << endl;
    cout << "Eyes: " << person.getEyes() << endl << endl;

    // Create a Learner object
    Learner learnerObj("Philip Njoroge", "Male");
    cout << "Learner class" << endl;
    learnerObj.getEyes(); // Calling the inherited function
    learnerObj.addAll(2, 3, 4); // Calling the member function

    cout << "Learner Eyes: " << learnerObj.getEyes() << endl;
    cout << "Learner addAll result: " << learnerObj.addAll(2, 3, 4) << endl;

    return 0;
}
