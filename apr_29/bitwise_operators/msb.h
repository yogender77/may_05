#include<stdio.h>
void msb_bit(int );
void msb_bit(int num)
{
int msb;
 msb = 1 << ((sizeof(int) * 8) - 1);
    if(num & msb)
        printf("msb bit set");
    else
        printf("msb bit is not set");

}
