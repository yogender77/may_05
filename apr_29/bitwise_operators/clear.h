#include<stdio.h>
void clear_bit(int ,int );
void clear_bit(int num,int p)
{
int clear;
clear=num&(~(1<<p));
printf("%d",clear);
}
