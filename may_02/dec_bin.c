#include<stdio.h>
int dec_bin(int );
int main()
{
int num;
printf("enter number:");
scanf("%d",&num);
printf("%d",dec_bin(num));
return 0;
}
int dec_bin(int num)
{
if(num==0)
{
return 0;
}
return (num%2+10*dec_bin(num/2));
}

