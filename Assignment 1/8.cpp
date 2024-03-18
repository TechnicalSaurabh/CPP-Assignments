#include <iostream>
using namespace std;
class Average{
public:
static float Avg(float a, float b, float c){
return (a + b + c) / 3;
}
};
main(){
cout<<"Enter three numbers: ";
float a, b, c;
cin>>a;
cin>>b;
cin>>c;
cout<<"The average of 3 number is: "<<Average::Avg(a,b,c)<<endl;
}