#include<stdio.h>
typedef struct
{
    char name[30];
    int age;
    float bs;
    float da;
    float hra;
    int tsal;
} employee;
void main()
{
    employee a[20], temp;
    int i,p,c;
    for(i=0;i<3;i++) // Only 3 details are to be added
    {
        printf("Enter name");
        scanf("%s",a[i].name);
        printf("Enter age");
        scanf("%d",&a[i].age);
        printf("Enter bs");
        scanf("%f",&a[i].bs);
        printf("Enter DA");
        scanf("%f",&a[i].da);
        printf("Enter HRA");
        scanf("%f",&a[i].hra);
        a[i].tsal=(1+a[i].da+a[i].hra)*a[i].bs;
        printf("\n");
    }

        for(p=1;p<3;p++) // bubble sort
        {
            for(c=0;c<3-p;c++)
            {
                if(a[c].tsal<a[c+1].tsal)
                {
                    temp=a[c];
                    a[c]=a[c+1];
                    a[c+1]=temp;
                }
            }
            
        }
    printf("Name\tAge\tBasicSalary\t DA \t\t HRA \t\tTotal-Salary \n");
    for(i=0;i<3;i++)
    {
        printf("%s\t%d\t%f\t%f\t%f\t%d \n",a[i].name,a[i].age,a[i].bs,a[i].da,a[i].hra,a[i].tsal);
    }
}