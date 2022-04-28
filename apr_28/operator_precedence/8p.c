#include<stdio.h>
int main()
{






int x=10,y=5,p,q;
p=x>9;// 0=5>9
q=p||(x==5,y=10);//1=0||10
printf("%d%d%d",q,x,y);//1,10,5
return 0;
}
