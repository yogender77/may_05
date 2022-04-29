#include<stdio.h>
void array_sort(int *p)
{
int i,j,temp; 
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(*(p+i)>*(p+j))
{
temp=*(p+i);
*(p+i)=*(p+j);
*(p+j)=temp;
}
}
}
for(i=0;i<10;i++)
{
printf("%d",*(p+i));
}
}
