// To add 2 numbers using pointers
#include<stdio.h>
int main()
{
    int *p,*q,a,b,sum;
    p=&a;
    q=&b;
    printf("\n Enter the 2 numbers: ");
    scanf("%d%d",&a,&b);
    sum=*p+*q;
    printf("\n The sum of 2 numbers = %d ",sum);
}