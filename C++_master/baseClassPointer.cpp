#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
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
Bulb *p;
p=new Bulb;
p->setWattage(60);
cout<<"Wattage is "<<p->getWattage()<<endl;
return 0;
}

