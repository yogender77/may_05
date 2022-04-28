#include<stdio.h>
int main()
{
int a=7;
a+=a+=a-=6;//4=2+2  2=1+1  1=7-6
printf("%d",a);//4
return 0;
}
