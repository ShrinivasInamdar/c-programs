//largest among 3
#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("\n Enter the 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        printf("\n The largest number is %d ",a);
    else if(b>c)
        printf("\n The largest number is %d",b);
    else
        printf("\n The largest number is %d",c);
}
