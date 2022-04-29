#include"swap.h"
void swap(int* ,int* );
int main()
{
int a=12,b=21;
int *ptr1=&a,*ptr2=&b;
printf("before swapping %d\t%d\n",*ptr1,*ptr2);
swap(ptr1,ptr2);
printf("after swapping %d\t%d\n",*ptr1,*ptr2);
return 0;
}

