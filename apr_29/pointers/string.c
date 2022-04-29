#include"string.h"
int main()
{
char str1[20],str2[20];
printf("enter first string:");
scanf("%s",str1);
printf("enter second string:");
scanf("%s",str2);
string_copy(str1,str2);
printf("%s",str2);
return 0;
}

