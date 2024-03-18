#include <iostream>
#include <cmath>
using namespace std;
class Triangle {
private:
float a, b, c;
public:
Triangle(int side1, int side2, int side3){
a=side1;
b=side2;
c=side3;
}
float area() {
float s = (a + b + c) / 2;
return sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
}
float perimeter() {
return a + b + c;
}
void printDetails() {
cout << "Area: " << area() << endl;
cout << "Perimeter: " << perimeter() << endl;
}
};
main() {
Triangle t(3, 4, 5);
t.printDetails();
}