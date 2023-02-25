#include<stdio.h>
void lmn(int p,int q)
{
printf("Total is %d\n",p+q);
}
int pqr(int x)
{
return x*x;
}
int main()
{
int(*k)(int);
void(*j)(int,int);
k=pqr;
j=lmn;
printf("%d\n",k(10));
j(10,20);
return 0;
}
