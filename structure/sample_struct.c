#include<stdio.h>
typedef struct
{
    char ename[30];
    int age;
    float bs;
    float da;
    float hra;
    float tsal;
} employee;
void main()
{
    employee a;
    printf("Enter the details");
    
    printf("\n Enter name:");
    scanf("%s",a.ename);
    printf("Enter age:");
    scanf("%d",&a.age);
    printf("Enter salary:");
    scanf("%f",&a.bs);
    printf("Enter DA:");
    scanf("%f",&a.da);
    printf("Enter HRA:");
    scanf("%f",&a.hra);
    a.tsal=(1+a.da+a.hra)*a.bs;
        
    printf("\n Name is %s. \n Age=%d. \n Basic salry=%f. \n DA=%f. \n HRA=%f. \n Total slary=%f.", a.ename,a.age,a.bs,a.da,a.hra,a.tsal);
    
}