#include<iostream>
#include<string.h>
using namespace std;
class book
{
private:
char title[36];
public:
void setTitle(const char *t)
{
if(strlen (t)>35)title[0]='\0';
else strcpy (title,t);
}
void getTitle (char *a)
{
strcpy(a,title);
}
};
int main()
{
book b;
b.setTitle("sicilian");
char ttt[36];
b.getTitle(ttt);
cout<<"Title:"<<ttt<<endl;
return 0;
}


