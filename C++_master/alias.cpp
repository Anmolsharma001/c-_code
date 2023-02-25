#include<iostream>
using namespace std;
int main()
{
int x;
int *p;
p=&x;
*p=60;
cout<<x<<endl;
x=10;
cout<<*p<<endl;
return 0;
}