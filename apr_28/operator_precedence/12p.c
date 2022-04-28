#include<stdio.h>
int main()
{
int i=10;
i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;//0? :4;
printf("%d",i);//4
return 0;
}
