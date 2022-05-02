#include<stdio.h>
#define n 5
void copy_array(int* ,int* );
int main()
{
int arr[n]={1,2,3,4,5};
int arr1[n];
copy_array(arr,arr1);
return 0;
}
void copy_array(int* arr,int* arr1)
{
int i;
for(i=0;i<n;i++)
{
*(arr1+i)=*(arr+i);
}
for(i=0;i<n;i++)
{
printf("%d\t",arr1[i]);
}
}
