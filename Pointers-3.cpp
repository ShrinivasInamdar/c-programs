//To find largest element in an array using pointer
#include<stdio.h>
int main()
{
    int a[100],n,i,L,*x;
    x=&a[0];
    printf("\n Enter the no of nos: ");
    scanf("%d",&n);
    printf("\n Enter the %d numbers: ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    L=a[0];
    for(i=0;i<n;i++)
    {
        if(L<=*x)
        L=*x;
        x++;
    }
    printf("\n The Largest number = %d ",L);
}