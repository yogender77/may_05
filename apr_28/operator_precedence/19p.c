#include<stdio.h>
int main()
{
int a=10,b=-5,c=2.5;
printf("%lu%d\n",sizeof(a)+sizeof((++b)*c),b);
return 0;
}

