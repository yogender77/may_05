#include"clear.h"
int main()
{
int num,p,clear;
printf("enter number:");
scanf("%d",&num);
printf("enter position");
scanf("%d",&p);
clear_bit(num,p);
return 0;
}
