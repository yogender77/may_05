#include<stdio.h>
struct node
{
int data;
struct node *link;
};
void create_linked_list(int m);
void dispaly();
int main()
{
struct node *start=NULL;
printf("enter how many nodes");
scanf("%d",&m);
for(i=0;i<m;i++)
{
printf("enter data:");
scanf("%d",&n);
cretae_linkedlist();
}
display();
return 0;
}
void create_linked_list(int m)
{
    struct node *temp,*q;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=m;
    temp->link=NULL;
    if(start==NULL)
    {
        start=temp;//if list empty
    }
    else
    {
       q=start;
       while(q->link!=NULL)
       {
           q=q->link;
       }
       q->link=temp;
}
void display()
{
    struct node *q;
    if(start==NULL)
    {
        printf("list is empty");
        return;
    }
    q=start;
    while(q!=NULL)
    {
        printf("%d\n",q->data);
        q=q->link;
    }
}
