#include<iostream>
using namespace std;
int main()
{
int *x,y,req,total;
cout<<"enter your requirement";
cin>>req;
if(req<=0)
{
cout<<"invalid requirement:"<<endl;
return 0;
}
x=new int[req];
for(y=0;y<req;y++)
{
cout<<"enter a number";
cin>>x[y];
}
for(total=0,y=0;y<req;y++)total=total+x[y];
cout<<"total is "<<total<<endl;
return 0;
}