#include<stdio.h>
typedef struct
{
    int real;
    int img;
}complex;
void main()
{
    complex a,b,c;
    printf("Enter real and img of 1st number: ");
    scanf("%d%d",&a.real,&a.img);
    printf("Enter real and img of 2nd number: ");
    scanf("%d%d",&b.real,&b.img);
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    printf("Solution is %d+%di",c.real,c.img); //addition
}