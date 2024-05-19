//Average of 10 Numbers
#include<stdio.h>
int main()
{
    int n;
    float avg=0,a[100],sum=0;
    printf("\n Enter the 10 numbers: ");
    for(int i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
        sum+=a[i];
    }
    avg=(sum/10);
    printf("\n The average of the numbers= %0.2f",avg);
}
