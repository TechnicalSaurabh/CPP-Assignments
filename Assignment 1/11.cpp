
#include<iostream>
using namespace std;
class Employee{
private:
int yoj;
float salary;
char name[30];
char add[100];
public:
void get(){
cout<<"\nEnter the Name Year of Joining salary address"<<endl;
cin>>name>>yoj>>salary>>add;
}
void show(){
cout<<"\nName="<<name<<"\nYear Of Joining="<<yoj<<"\nSalary="<<salary<<"\nAddress="<<add<<endl;
}
};
main(){
Employee e1,e2,e3;
e1.get();
e1.show();
cout<<"\n=================================================";
e2.get();
e2.show();
cout<<"\n=================================================";
e3.get();
e3.show();
}