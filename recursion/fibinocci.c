#include<stdio.h>
int fib(int i)
{
    if(i==1)
        return(0);
    else if(i==2)
        return(1);
    return(fib(i-1)+fib(i-2));
}
void main()
{
    int l,i;
    printf("Enter n:"); //Enter how many numbers of the series is to be printed
    scanf("%d",&l);
    for(i=1;i<=l;i++)
        printf("%d \t", fib(i));
}