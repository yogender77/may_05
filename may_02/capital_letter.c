#include<stdio.h>
#include<string.h>
char capital_letter(char* );
int main()
{
char str[20];
char n;
printf("enter stribg:");
scanf("%s",str);
n=capital_letter(str);
printf("capiatal letter is=%c",n);

return 0;
}
char capital_letter(char *str)
{
static int i = 0;
    if (i < strlen(str))
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            return str[i];
        }

        else
        {
            i = i + 1;
            return capital_letter(str);
        }
    }
}
