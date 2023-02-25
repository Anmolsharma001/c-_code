#include<iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"Base class default constructor"<<endl;
}
};
class bbb:public aaa
{

};
int main()
{
bbb g;
bbb m(g);
return 0;
}
