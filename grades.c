//grade
#include<stdio.h>
int main()
{
    int n;
    printf("\n Enter the marks: ");
    scanf("%d",&n);
    if(n>=80&&n<=100)
        printf("\n %d Distinction",n);
    else if(n>=60&&n<=79)
        printf("\n %d First class",n);
    else if(n>=50 &&n<=59)
        printf("\n %d Second class",n);
    else if(n>=40 && n<=49)
        printf("\n %d Pass class",n);
    else if(n>=0 && n<=39)
        printf("\n %d needs improvement",n);
}
