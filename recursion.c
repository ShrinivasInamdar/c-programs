// Factorial of number using recursion
#include <stdio.h>
int fact(int x)
{
    if(x==1 || x==0)
    {
        return 1;
    }
    else
    {
        return x*fact(x-1);
    }
}
int main()
{
    int a,f;
    printf("\n Enter the number: ");
    scanf("%d",&a);
    f=fact(a);
    printf("\n Factorial = %d",f);
}
