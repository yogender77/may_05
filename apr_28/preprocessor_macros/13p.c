#include<stdio.h>

#define preprocessor(n) printf ("macro" #n " = %d", macro##n)

int main(void) {

	int macro25 = 47;

	preprocessor(25);//macro25=47

	return 0;

}
