#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return(1);
    return(n*fact(n-1));
}
void main()
{
    int n,r;
    printf("Enter n and r:");
    scanf("%d%d",&n,&r);
    printf(" Answer of nCr is %d \n", fact (n)/(fact(n-r)*fact(r)));
    printf(" Answer of nPr is %d", fact (n)/fact(n-r));
}