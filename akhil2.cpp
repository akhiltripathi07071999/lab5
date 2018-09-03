#include<iostream>
using namespace std;
int main()
{
int num1,num2,num3;
cout<<"enter the first number"<<endl;
cin>>num1;
cout<<"enter the second number"<<endl;
cin>>num2;
cout<<"enter the third number"<<endl;
cin>>num3;
if (num1>num2>num3)
cout<<num1<<"is maximum"<<endl;
if (num2>num3>num1)
cout<<num2<<"is maximum"<<endl;
else
cout<<num3<<"is maximum"<<endl;
return 0;
}
