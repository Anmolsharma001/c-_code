#include<iostream>
using namespace std;
void add(int x,int y)
{
int z;
z=x+y;
cout<<"total is"<<z<<endl;
}
void add(float x,float y)
{
float z;
z=x+y;
cout<<"total is"<<z<<endl;
}
int main()
{
	add(10,20);
	add(3.3f,4.5f);
return 0;
}
