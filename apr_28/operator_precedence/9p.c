#include<stdio.h>
int main()
{
int x=2,y=1;
y+=x<<=2; // 9=1+8 8=2<<2
printf("%d %d",x,y);//8 9
return 0;
}
