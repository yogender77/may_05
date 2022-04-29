#include<stdio.h>
void copy_array(int* arr,int* arr1)
{
int i,n=5;
for(i=0;i<n;i++)
{
*(arr1+i)=*(arr+i);
}
for(i=0;i<n;i++)
{
printf("%d\t",arr1[i]);
}
}

