#include<iostream>
#include<string.h>
using namespace std;
class SDCard
{
private:
int capacity;
public:
void setCapacity(int c)
{
capacity=c;
}
int getCapacity()
{
return capacity;
}
};
class MobilePhone
{
private:
char brandName[36];
SDCard sdcard;
int price;
public:
void setBrandName(const char*b)
{
strcpy(brandName,b);
}
void getBrandName(char *b)
{
strcpy(b,brandName);
}
void setPrice(int p)
{
price=p;
}
int getPrice()
{
return price;
}
void setSDCard(SDCard s)
{
sdcard=s;
}
SDCard getSDCard()
{
return sdcard;
}
};
int main()
{
MobilePhone m;
m.setBrandName("nokia");
m.setPrice(25000);
SDCard ss;
ss.setCapacity(10);
m.setSDCard(ss);
char br[36];
m.getBrandName(br);
int pr;
pr=m.getPrice();
SDCard kk=m.getSDCard();
cout<<"Mobile Details"<<endl;
cout<<"Brand:"<<br<<endl;
cout<<"price:"<<pr<<endl;
cout<<"Capacity of SDCard in mobile:"<<kk.getCapacity()<<endl;
return 0;
}
