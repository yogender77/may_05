#include<stdio.h>
int main()
{
int x=2,y=4,z;
z=y++*x++|y--;
printf("%d",z);//13
return 0;
}
