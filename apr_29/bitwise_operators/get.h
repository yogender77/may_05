#include<stdio.h>
void get_bit(int ,int );
void get_bit(int num,int p)
{
int get;
get=1<<p;
if(get&num)
{
printf("1");
}
else
{
printf("0");
}
}
