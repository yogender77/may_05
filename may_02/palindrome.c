#include<stdio.h>
#include<string.h>
int palindrome(char *str,int i,int j);
int main()
{
char str[20];
int n;
printf("enter string:");
scanf("%s",str);
n=strlen(str);
if(palindrome(str,0,n-1))
{
printf("string is palindrome");
}
else
{
printf("string is not a palindrome");
}
return 0;
}
int palindrome(char *str,int i,int j)
{
if(i>=j)
{
return 1;
}
if(str[i]==str[j])
{
return (str,i+1,j-1);
}
return 0;
}
