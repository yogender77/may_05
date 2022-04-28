#include<stdio.h>
int main()
{
int a=1,b=1,c=1,x;
x=--a||++b*(3-1)/2&&b*(--c/3);
printf("%d",x);//0
return 0;
}

