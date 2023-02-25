#include<iostream>
using namespace std;
void add(int p,int q,int r=0)
{
cout<<"Total is "<<(p+q+r)<<endl;
}
void add(int p,int q)
{
cout<<"Total is "<<(p+q+r)<<endl;
}
int main()
{
add(10,45,40);
add(12,34);
return 0;
}