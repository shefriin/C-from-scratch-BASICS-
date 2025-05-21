#include<stdio.h>
typedef struct
{
    int rno;
    char name[30];
    int mark;
} student;
void main()
{
    student a[50];
    int i,s=0,l,avg;
    printf("Enter total no of students: ");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        printf("Enter roll no: ");
        scanf("%d",&a[i].rno);
        printf("Enter name: ");
        scanf("%s",a[i].name);
        printf("Enter mark: ");
        scanf("%d",&a[i].mark);
    }
    
    for(i=0;i<l;i++)
    {
        s=s+a[i].mark;
    }
    avg=s/l;
    printf("Rollno.\tName\tMark");
    for(i=0;i<l;i++)
    {
        printf("\n%d\t%s\t%d \n",a[i].rno,a[i].name,a[i].mark);
        
    }
    printf("Averge is %d",avg);
}