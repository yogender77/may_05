#include<stdio.h>

#define i 10

int main()

{

	#define i 20

	printf("%d",i);//i is redeclared

	return 0;

}
