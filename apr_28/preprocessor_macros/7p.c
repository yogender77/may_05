#include<stdio.h>

#define fun(x,y) x*y

int main()

{

	int x = 2, y = 1;

	printf("%d",fun(x + 2, y - 1));//(2+2*1-1) 2+2-1=3

	return 0;

}
