#include <iostream>
using namespace std;
class Area {
private:
int length;
int breadth;
public:
void setDim(int len, int bre) {
length = len;
breadth = bre;
}
int getArea() {
return length * breadth;
}
};
main() {
Area rect;
int len, bre;
cout << "Enter length of the rectangle: ";
cin >> len;
cout << "Enter breadth of the rectangle: ";
cin >> bre;
rect.setDim(len, bre);
cout << "Area of the rectangle: " << rect.getArea() << endl;
}