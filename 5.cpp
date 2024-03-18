#include <iostream>
using namespace std;
class Rectangle {
private:
int length;
int breadth;
public:
Rectangle(int len, int bre){
length=len;
breadth=bre;
}
int Area() {
return length * breadth;
}
};
main() {
Rectangle r1(4, 5);
Rectangle r2(5, 8);
cout << "Area of rectangle 1: " << r1.Area() << endl;
cout << "Area of rectangle 2: " << r2.Area() << endl;
}