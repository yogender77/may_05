#include<stdio.h>

#include<string.h>

#define MACRO(num) ++num 

int main()

{

	char *ptr = "preprocessor";

	int num =strlen(ptr);

	printf("%s  ", MACRO(ptr));//++ptr reprocessor

	printf("%d", MACRO(num));//13 including null character

	return 0;

}
