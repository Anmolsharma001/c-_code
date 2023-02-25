#include<stdio.h>
#include<string.h>
void main()
{
int i,j,state=0;
char x[10];
printf("enter the string:");
gets(x);
i=strlen(x);
for(j=0;j<i;j++)
{
switch(state)
{
case0: if(x[j]==0)
{
state=0;
}
else
{
state=1;
}break;
case1: if(x[j]==0)
{
state=2;
}else
{
state=0;
}
break;
case2: if(x[j]==0)
{
state=1;
}
else
{
state=2;
}
break;
}
}
printf("output of the machine is %d\n",state);
}
