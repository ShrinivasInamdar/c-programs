//To swap value of 2 numbers using call by refrence
#include <stdio.h>
int swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return *x,*y;
    
}
int main()
{
    int a,b;
    printf("\n Enter the 2 numbers: ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("\n The swapped numbers= %d %d",a,b);
    
}
