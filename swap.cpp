#include<iostream>
using namespace std;
int main()
{
int a,b,temp;
cout<<"enter the number:";
cin>>a;
cout<<"enter the second number:";
cin>>b;
cout<<"Before swapping:a = " << a << ", b = " << b<<endl;
temp=a;
a=b;
b=temp;
cout << "After swapping: a = " << a << ", b = " << b<<endl;
return 0;
}
