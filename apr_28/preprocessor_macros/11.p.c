#include<stdio.h>

#define  preprocessor_works(x, y)  \

	printf(#x " and " #y " are great!\n")

int main(void) {

	preprocessor_works(you, me);

	return 0;

}
