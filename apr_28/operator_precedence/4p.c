#include<stdio.h>
int main()
{
int x=2;
printf("%d ",++x++);//4p.c:5:14: error: lvalue required as increment operand

printf("%d",x++);
return 0;
}
