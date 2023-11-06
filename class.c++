#include <iostream>
using namespace std;

class user {
    int userID;
    string name;
    string email;

public:
    user(int userID, string name, string email) {
        this->userID = userID;
        this->name = name;
        this->email = email;
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
    user myUser(10, "philip njoroge", "pnjuguna.main");
    cout << myUser.getName() << endl;
    cout << myUser.getEmail() << endl;
    return 0;
}
