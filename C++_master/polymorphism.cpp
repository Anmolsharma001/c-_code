#include<iostream>
using namespace std;
void add(int a,int b)
{
cout<<a+b<<endl;
}
void add(float a,float b,float c)
{
cout<<a+b+c<<endl;
}
int main()
{
add(100,200);
add(10.4,20.4,34.7);
return 0;
}
