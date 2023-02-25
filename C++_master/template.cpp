#include<iostream>
using namespace std;
template<class cartoon>
void add(cartoon x,cartoon y)
{
cartoon z;
z=x+y;
cout<<"Total is:"<<z<<endl;
}
int main()
{
add(10,20);
add(2.3f,44.5f);
add(50,40);
return 0;
}
