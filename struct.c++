#include <iostream>
#include <string>
using namespace std;

// Define a structure for a Student
struct Student {
    string name;
    int age;
    double grade;
};

int main() {
    const int numStudents = 3; // Number of students

    // Create an array of Student structures
    Student students[numStudents] = {
        {"philip njoroge ", 20, 95.5},
        {"caro", 22, 88.0},
        {"Eva km", 19, 75.5}
    };

    // Display information for each student
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << (i + 1) << " Information:" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Grade: " << students[i].grade << endl;
        cout << endl;
    }

    // Calculate the average grade
    double totalGrade = 0.0;
    for (int i = 0; i < numStudents; i++) {
        totalGrade += students[i].grade;
    }
    double averageGrade = totalGrade / numStudents;

    cout << "Average Grade: " << averageGrade << endl;

    return 0;
}
