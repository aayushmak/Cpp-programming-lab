#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double breadth;

public:
    
    Rectangle() : length(0.0), breadth(0.0) {}


    Rectangle(double len, double brd) : length(len), breadth(brd) {}


    Rectangle(double value) : length(value), breadth(value) {}

    
    double calculateArea() {
        return length * breadth;
    }
};

int main() {
    Rectangle rectangle1;  
    cout << "Area of rectangle1: " << rectangle1.calculateArea() << endl;

    Rectangle rectangle2(4.5, 5.5);  
    cout << "Area of rectangle2: " << rectangle2.calculateArea() <<endl;

    Rectangle rectangle3(3.0);  
    cout << "Area of rectangle3: " << rectangle3.calculateArea() << endl;

    return 0;
}


