#include<stdio.h>
int main()
{
int a=5,b=6,c=7,d;
d=a&=b&=c&&a;//0=5&0=6&1
printf("%d",d);
return 0;
}
