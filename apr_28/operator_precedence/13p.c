#include<stdio.h>
int main()
{
int a=10,b=20;
a=(a>5||b=6?40:50);//13p.c:5:10: error: lvalue required as left operand of assignment

printf("%d",a);
return 0;
}
