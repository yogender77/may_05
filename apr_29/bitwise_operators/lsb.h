#include<stdio.h>
void lsb(int );
void lsb(int num)
{
if(num&1)
{
printf("bit is set");
}
else
{
printf("bit is not set");
}
}
