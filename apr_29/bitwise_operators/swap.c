#include"swap.h"
int main()
{
int a,b;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
printf("before swapping=%d\t%d\n",a,b);
swap(a,b);
return 0;
}
