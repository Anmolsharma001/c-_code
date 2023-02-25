#include<iostream>
using namespace std;
class aaa
{
public:
void sam()
{
cout<<"sanju"<<endl;
}
};
class bbb:virtual public aaa
{
public:
void tom()
{
cout<<"cool"<<endl;
}
};
class ccc:virtual public bbb
{
public:
void joy()
{
cout<<"great"<<endl;
}
};
class ddd:piblic bbb ,puliv ccc
{
public:
{
void bobby()
{
cout<<"Fantastic"<<endl;
}
};
int main()
{
ddd d;
d.sam();
return 0;
}
