//Searching 
#include<stdio.h>
int main()
{
    int a[100],n,x;
    int flag=0;
    
    printf("\n Enter the number of numbers: ");
    scanf("%d",&n);
    
    printf("\n Enter the %d numbers: ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("\n Enter the number to be searched: ");
    scanf("%d",&x);
    
    for(int i=0;i<n;i++)
    {
        if(x==a[i])
        {
            printf("\n The number is found at position %d\n",i+1);
            flag=1;
            break;
        }
    }
    if (flag==0) {
        printf("\n Number not found\n");
    } else {
        return 0;
    }

}
