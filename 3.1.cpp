#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

public:
    
    Student(const string& studentName = "Unknown") : name(studentName) {}

    void printName() {
       cout << "Student name: " << name << endl;
    }
};

int main() {
    Student student1;  
    student1.printName();

    Student student2("Aayushma");  
    student2.printName();

    return 0;
}

