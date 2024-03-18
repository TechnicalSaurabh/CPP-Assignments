#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
string name;
double salary;
string dateOfJoining;
public:
Employee() {
// Default constructor
}
void getData() {
cout << "Enter employee name: ";
cin >> name;
cout << "Enter employee salary: ";
cin >> salary;
cout << "Enter date of joining (dd/mm/yyyy): ";
cin >> dateOfJoining;
}
void displayData() {
cout << "Name: " << name << endl;
cout << "Salary: " << salary << endl;
cout << "Date of Joining: " << dateOfJoining << endl;
}
};
int main() {
Employee employees[10]; 
for (int i = 0; i < 10; i++) {
cout << "Enter details for employee " << i + 1 << ":\n";
employees[i].getData();
}

cout << "\nEmployee Details:\n";
for (int i = 0; i < 10; i++) {
cout << "Employee " << i + 1 << ":\n";
employees[i].displayData();
cout << "--------------------\n";
}
return 0;
}