#include<stdio.h>
void palindrome(char* );
int main()
{
char str[]="12321";
palindrome(str);
return 0;
}
void palindrome(char *str)
{
int i=0,j=0,count;
while(str[i]!='\0')
{
i++;
}
printf("%d\n",i+1);
for(j=0;j<i;j++)
{
if(str[j]!=str[i-j-1])
{
count=1;
break;
}
}
if(count==1)
{
printf("string is not palindome");
}
else
{
printf("string is palindrome");
}
}
