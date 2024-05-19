//Smallest & Largest
#include<stdio.h>
int main()
{
    int a[100],s=0,l=0,n;
    printf("\n Enter the number of numbers:  ");
    scanf("%d",&n);
    printf("\n Enter the %d numbers: ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    s=l=a[0];
    for(int i=0;i<a[i];i++)
    {
        if(a[i]>l)
            l=a[i];
        else if(a[i]<s)
            s=a[i];
        
    }
    printf("\n The smallest = %d & largest = %d",s,l);
    
}
