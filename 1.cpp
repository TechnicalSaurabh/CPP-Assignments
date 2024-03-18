#include<iostream>
using namespace std;
class Student
{
private:
int roll_no;
string name;
public:
void get_student()
{
cout<<"\nEnter Roll no name"<<endl;
cin>>roll_no>>name;
}

void show_student()
{
cout<<"\nRoll No="<<roll_no<<"\nName="<<name<<endl;
}

};

main()
{
Student s1;
s1.get_student();

s1.show_student();
}