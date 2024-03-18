#include <iostream>
using namespace std;
class Area {
private:
int length;
int breadth;
public:
Area(int len, int bre){
length=len;
breadth=bre;
}
int returnArea() {
return length * breadth;
}
};
int main() {
int len, bre;
cout << "Enter length of the rectangle: ";
cin >> len;
cout << "Enter breadth of the rectangle: ";
cin >> bre;
Area rect(len, bre);
cout << "Area of the rectangle: " << rect.returnArea() << endl;
}