#include<iostream>
using namespace std;
class aaa
{
public:
void sam()
{
cout<<"Great"<<endl;
}
static void tom()
{
cout<<"cool"<<endl;
}
};
int main()
{
aaa a;
a.sam();
a.tom();
return 0;
}
