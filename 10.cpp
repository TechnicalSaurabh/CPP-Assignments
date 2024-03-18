#include <iostream>
using namespace std;
class Volume {
private:
int length, breadth, height;
public:
Volume(int l, int b, int h){
length=l;
breadth=b;
height=h;
}
int getVolume() {
return length * breadth * height;
}
};
main() {
int l, b, h;
cout << "Enter length, breadth, and height of the box: ";
cin >> l >> b >> h;
Volume box(l, b, h);
cout<<"The volume of the box is: " << box.getVolume()<<endl;
}