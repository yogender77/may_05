#include<stdio.h>
int main()
{
int i=5;
i=i++ - --i + ++i;//5-5+6
printf("%d",i);//6
return 0;
}
