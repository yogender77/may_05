#include<stdio.h>
int fibanocci(int );
int main()
{
int i,n=15;
for(i=0;i<n;i++)
{
printf("%d\t",fibanocci(i));
}
return 0;
}
int fibanocci(int i)
{
if(i==0)
{
return 0;
}
else if(i==1)
{
return 1;
}
return fibanocci(i-1)+fibanocci(i-2);
}
