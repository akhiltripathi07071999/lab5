#include<iostream>
using namespace std;
int main()
{
int i=1;
cout<< "all odd numbers between 1 to 100"<<endl;
cout<< "enter the numbers"<<endl;
while (i<=100){
if (i % 2 == 1){
cout<<i<< " ";
}
i++;
}
return 0;
}
