#include<stdio.h>
struct student{
    char name[20];
    char branch[20];
    int cgpa;
}data[10];
int student_count();
void printf_data_students(int n);
void input_data(int n);
void printf_data_students(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s-->%s-->%d\n",data[i].name,data[i].branch,data[i].cgpa);
    }
}
void input_data(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter student name:");
        scanf("%s",data[i].name);
        printf("enter student branch:");
        scanf("%s",data[i].branch);
        printf("enter cgpa:");
        scanf("%d",&data[i].cgpa);
    }
}
int student_count()
{
    int count;
    printf("enter number of students:");
    scanf("%d",&count);
    return count;
}
          
