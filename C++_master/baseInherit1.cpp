#include<iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"Base class default constructor"<<endl;
}
aaa(int e)
{
cout<<"Base class Parameterized constructor"<<endl;
}
};
class bbb:public aaa
{
public:
bbb()
{
cout<<"Derived class default constructor"<<endl;
}
bbb(int e)
{
cout<<"Derived class parameterized constructor"<<endl;
}
};
int main()
{
bbb g;
bbb m(60);
return 0;
}
