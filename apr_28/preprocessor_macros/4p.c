#include<stdio.h>

#define sqr(x) ++x * ++x

int main()

{

	int a = 3, z;

	z = ++a * ++a;     //4*4

	a -= 3;

	printf("%d %d", sqr(a), z);//5*5 16

	return 0;

}


