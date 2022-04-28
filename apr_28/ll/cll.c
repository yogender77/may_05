#include<stdio.h>
#include<stdlib.h>
struct node{
    char data;
    struct node* link;
};
void create_circular_list(int m);
void display();
struct node *start=NULL;
struct node *tail=NULL;
int main()
{
    int n,i;
    char cha;
    printf("enter number of nodes to want enter:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter data to the node:");
        scanf("%c",&cha);
        create_circular_list(cha);
    }
    display();
}
void display()
{
    struct node *temp;
    temp=start;
    do
    {
        printf("%c\t",temp->data);
        temp=temp->link;
    } while(temp!=start);
}
void create_circular_list(int cha)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=cha;
    temp->link=NULL;
    if(start==NULL)
    {
        start=tail=temp;
        temp->link=start;
    }
    else
    {
        tail->link=temp;
        tail=temp;
        tail->link=start;
    }
}
