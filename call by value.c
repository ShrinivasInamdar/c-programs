//Swap 2 nos using call by value
#include<stdio.h>
void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\n The swapped values are: %d %d",x,y);
}
int main()
{
    int a,b;
    printf("\n Enter the 2 numbers: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
}
