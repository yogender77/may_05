#include<stdio.h>
void swap(int ,int );
void swap(int a,int b)
{
a=a^b;
b=a^b;
a=a^b;
printf("after swapping=%d\t%d",a,b);
}
