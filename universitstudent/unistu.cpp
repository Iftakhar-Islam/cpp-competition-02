#include <iostream>
#include <string>
using namespace std;

class University_Student {
private:
    string name;
    string stuid;
    string department;
    float cgpa;

public:
    // Parameterized constructor
    University_Student(string n, string id, string dept, float gpa) {
        name = n;
        stuid = id;
        department = dept;
        cgpa = gpa;
    }

    // Copy constructor
    University_Student(const University_Student &student) {
        name = student.name;
        stuid = student.stuid;
        department = student.department;
        cgpa = student.cgpa;
    }

    void display() {
        cout << "Student Name = " << name << endl;
        cout << "Student ID = " << stuid << endl;
        cout << "Department =" << department << endl;
        cout << "CGPA = " << cgpa;
    }
};

int main() {
    
    University_Student student1("MD.iftakhar", "ET243097", "EEE", 3.5);

    
    University_Student student2 = student1;

    cout << "Student 1 =" << endl;
    student1.display();

    cout << "\nStudent 2  (Copied)=" << endl;
    student2.display();

    return 0;
}
