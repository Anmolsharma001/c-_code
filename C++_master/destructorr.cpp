#include<iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"Default constructor"<<endl;
}
~aaa()
{
cout<<"Destructor"<<endl;
}
};
void lmn()
{
aaa g,m,t;
cout<<"cool"<<endl;
}
int main()
{
aaa a,b;
cout<<"whatever"<<endl;
lmn();
cout<<"good"<<endl;
return 0;
}
