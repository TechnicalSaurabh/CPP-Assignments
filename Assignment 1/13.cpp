#include <iostream>
using namespace std;
main() {
int marks[8][3];
int roll[8] = {1, 2, 3, 4, 5, 6, 7, 8};
for (int i = 0; i < 8; i++) {
cout << "Enter marks for student " << roll[i] << ": ";
for (int j = 0; j < 3; j++) {
cin >> marks[i][j];
}
}
for (int i = 0; i < 8; i++) {
float average = (marks[i][0] + marks[i][1] + marks[i][2]) / 3.0;
cout << "Roll Number: " << roll[i] << ", Average Marks: " << average << endl;
}
}