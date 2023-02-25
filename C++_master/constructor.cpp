#include<iostream>
using namespace std;
class Bulb
{
int w;
public:
Bulb()
{
w=0;
}
void setWattage(int e)
{
w=e;
}
int getWattage()
{
return w;
}
};
int main()
{
Bulb g,t;
cout<<"wattage is:"<<g.getWattage()<<endl;
cout<<"wattage is:"<<t.getWattage()<<endl;
Bulb k;
cout<<"wattage is:"<<k.getWattage()<<endl;
return 0;
}
