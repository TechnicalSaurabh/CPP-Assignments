#include <iostream>
using namespace std;
main() {
int numStudents;
float sumHeights = 0.0, averageHeight;
cout << "Enter the number of students: ";
cin >> numStudents;
for(int i = 0; i < numStudents; ++i) {
float height;
cout << "Enter height of student " << i + 1 << " in cm: ";
cin >> height;
sumHeights += height;
}
averageHeight = sumHeights / numStudents;
cout << "Average height of students: " << averageHeight << " cm" << endl;
}