#include <iostream>
using namespace std;
class Complex {
public:
int real, imag;
Complex(int r = 0, int i = 0){
real=r;
imag=i;
}
Complex add(Complex const &obj) {
Complex res;
res.real = real + obj.real;
res.imag = imag + obj.imag;
return res;
}
Complex subtract(Complex const &obj) {
Complex res;
res.real = real - obj.real;
res.imag = imag - obj.imag;
return res;
}
Complex multiply(Complex const &obj) {
Complex res;
res.real = real * obj.real - imag * obj.imag;
res.imag = real * obj.imag + imag * obj.real;
return res;
}
void display() const {
cout << real << " + " << imag << "i" << endl;
}
};
main() {
int real1, imag1, real2, imag2;
cout << "Enter the real and imaginary parts of the first complex number: ";
cin >> real1 >> imag1;
Complex c1(real1, imag1);
cout << "Enter the real and imaginary parts of the second complex number: ";
cin >> real2 >> imag2;
Complex c2(real2, imag2);
Complex c3 = c1.add(c2);
cout << "Sum of two complex numbers: ";
c3.display();
c3 = c1.subtract(c2);
cout << "Difference of two complex numbers: ";
c3.display();
c3 = c1.multiply(c2);
cout << "Product of two complex numbers: ";
c3.display();
}