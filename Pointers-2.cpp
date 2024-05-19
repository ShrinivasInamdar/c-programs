//To reverse a number using pointer
#include<stdio.h>
int main()
{
    int *p,rev=0,x,n;
    p=&n;
    printf("\n Enter the number to be reversed: ");
    scanf("%d",&n);
    while(n!=0)
    {
        x=n%10;
        rev=rev*10+x;
        *p=*p/10;
    }
    printf("\n The reversed number = %d ",rev);
}