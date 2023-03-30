#include<iostream>
using namespace std;
int main()
{
int n,r,sum,temp;
cout<<"enter the number";
cin>>n;
temp=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(temp==sum)
{
cout<<"Armstrong number"<<endl;
cout<<endl;
cout<<"not Armstrong number"<<endl;
}
return 0;
}

