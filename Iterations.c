//factorial of a number using iteration
#include <stdio.h>
int factorial(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int a,fact;
    printf("\n Enter the number: ");
    scanf("%d",&a);
    fact=factorial(a);
    printf("\n Factorial of the number= %d",fact);
}
