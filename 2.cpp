#include<iostream>
using namespace std;
class Student
{
private:
int roll_no,phone;
char name[100];
string address;
public:
void get_student(){
cout<<"\nEnter name Roll no phone number address"<<endl;
cin>>name>>roll_no>>phone>>address;
}
void show_student()
{
cout<<"\nName="<<name<<"\nRollNo="<<roll_no<<"\nPhone number="<<phone<<"\nAddress="<<address<<endl;
}
};
main()
{
Student s1,s2;
s1.get_student();
s1.show_student();
s2.get_student();
s2.show_student();
}