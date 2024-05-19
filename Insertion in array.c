// Insertion of Element
#include<stdio.h>
int main()
{
    int a[100],n,x,y;
    printf("\n Enter the number of numbers: ");
    scanf("%d",&n);
    printf("\n Enter %d numbers: ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n Enter the number to be inserted & at which place: ");
    scanf("%d%d",&x,&y);
   if(y>=1 && y<=n+1)
   {
       n++;
       for(int i=y-1;i>=y;i++)
           a[i]=a[i-1];
       a[y-1]=x;
   }
    else
        printf("\n Invalid Position");
    printf("\n The new array: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
