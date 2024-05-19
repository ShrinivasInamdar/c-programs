//To find square & cube of a number using call by value
#include <stdio.h>
#include<math.h>
void square(int x)
{
    int S;
    S=pow(x,2);
    printf("\n The square of the number= %d ",S);
}
void cube(int x)
{
    int C;
    C=pow(x,3);
    printf("\n The cube of the number= %d \n",C);
}
int main()
{
    int a;
    printf("\n Enter the number whose square & cube has to be calculated: ");
    scanf("%d",&a);
    square(a);
    cube(a);
}
