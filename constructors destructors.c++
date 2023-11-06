#include <iostream>
using namespace std;

class user {
    int userID;
    string name;
    string email;

public:
// constructor
    user(int userID, string name, string email) {
        this->userID = userID;
        this->name = name;
        this->email = email;
    }

    // Destructor
    ~user() {
        cout << "User object with ID " << userID << " is being destroyed." << endl;
    }

    int getID() {
        return userID;
    }

    string getName() {
        return name;
    }

    string getEmail() {
        return email;
    }
};

int main() {
    user user1(10, "philip njoroge", "pnjuguna.main");
    cout << "User ID: " << user1.getID() << endl;
    cout << "User Name: " << user1.getName() << endl;
    cout << "User Email: " << user1.getEmail() << endl;

    user user2(20, "John Doe", "johndoe@example.com");
    cout << "User ID: " << user2.getID() << endl;
    cout << "User Name: " << user2.getName() << endl;
    cout << "User Email: " << user2.getEmail() << endl;

    // user1 and user2 will be destroyed when they go out of scope
    return 0;
}
