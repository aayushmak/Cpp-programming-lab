#include <iostream>
using namespace std;
class AreaCalculator {
public:
    
    void calculateArea(double length, double breadth) {
        double area = length * breadth;
        cout << "Area of rectangle: " << area << endl;
    }


    void calculateArea(double side) {
        double area = side * side;
        cout << "Area of square: " << area << endl;
    }
};

int main() {
    AreaCalculator calculator;

    double length = 4.5;
    double breadth = 5.5;
    calculator.calculateArea(length, breadth);

    double side = 3.0;
    calculator.calculateArea(side);

    return 0;
}

