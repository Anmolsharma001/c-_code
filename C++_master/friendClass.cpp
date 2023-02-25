#include<iostream>
using namespace std;
class TV
{
private:
int price;
public:
void setPrice(int price)
{
this->price=price;
}
int getPrice()
{
return this->price;
}
friend class calculator;
};
class Fridge
{
private:
int price;
public:
void setPrice(int price)
{
this->price=price;
}
int getPrice()
{
return price;
}
friend class calculator;
};
class calculator
{
public:
int getTotalCost(TV &t,Fridge &f)
{
return t.price+f.price;
}
int getCostDifference(TV &t,Fridge &f)
{
return t.price-f.price;
}
};
int main()
{
TV product1;
Fridge product2;
product1.setPrice(50000);
product2.setPrice(27000);
calculator c;
int total=c.getTotalCost(product1,product2);
int diff=c.getCostDifference(product1,product2);
cout<<"Total Cost is :"<<total<<endl;
cout<<"Diff is of:"<<diff<<endl;
return 0;
} 





