#include<iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"Base class Default constructor"<<endl;
}
~aaa()
{
cout<<"Base class Destructor"<<endl;
}
};
class bbb:public aaa
{
public:
bbb()
{
cout<<"Derived class Default constructor"<<endl;
}
~bbb()
{
cout<<"Derived class Destructor"<<endl;
}
};
int main()
{
bbb b;
cout<<"cool"<<endl;
return 0;
}

