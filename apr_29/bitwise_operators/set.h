#include<stdio.h>
void set_bit(int ,int );
void set_bit(int num,int p)
{
int set;
set=num|(1<<p);
printf("%d",set);
}
