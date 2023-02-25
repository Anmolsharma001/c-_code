#include<iostream>
#include<string.h>
using namespace std;
class person
{
private:
char name[21];
public:
void setName(const char *n)
{
strcpy(name,n);
}
void getName(char *n)
{
strcpy(n,name);
}
};
class employee
{
private:
int id;
int salary;
public:
void setId(int i)
{
id=i;
}
int getId()
{
return id;
}
void setSalary(int s)
{
salary=s;
}
int getSalary()
{
return salary;
}
};
class doctor:public person,public employee
{
private:
char type[51];
public:
void setType(const char *t)
{
strcpy(type,t);
}
void getType(char *t)
{
strcpy(t,type);
}
};
int main()
{
doctor d;
d.setName("Sameer");
d.setType("Dentist");
d.setSalary(34000);
char name[21];
char type[51];
int salary;
salary=d.getSalary();
d.getName(name);
d.getType(type);
cout<<"Employee deails"<<endl;
cout<<"Name :"<<name<<endl;
cout<<"Type:"<<type<<endl;
cout<<"salary:"<<salary<<endl;
return 0;
}















