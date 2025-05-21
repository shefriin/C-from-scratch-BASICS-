#include<stdio.h>
int psum (int a, int b);
int pdif (int a, int b);
int pmul (int a, int b);
float pdiv (float a, float b);
int pmod (int a, int b);
void main()
{
    int a,b;
    printf("Enter the 2 numbers");
    scanf("%d%d",&a,&b);
    
    printf("Sum is %d  \n",psum(a,b));
    printf("Difference is %d \n",pdif(a,b));
    printf("Multiplied is %d \n",pmul(a,b));
    printf("Divided is %f \n",pdiv(a,b));
    printf("Modulus is %d \n",pmod(a,b));
    
}

int psum (int a, int b)
{
    return(a+b);
}


int pdif (int a, int b)
{
    return(a-b);
}


int pmul (int a, int b)
{
    return(a*b);
}


float pdiv (float a, float b)
{
    return(a/b);
}


int pmod (int a, int b)
{
    return(a%b);
}
