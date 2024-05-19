// area of circle, rectangle & triangle
#include<stdio.h>
int main()
{
    float r,l,b,h;
    int n;
    printf("\n Enter the area to be calculated: \n1) Triangle\n2)Circle\n3)Rectangle: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("\n Enter the base & height of triangle: ");
            scanf("%f%f",&b,&h);
            printf("\n Area= %0.2f",0.5*b*h); break;
        case 2:printf("\n Enter the radius of the circle: ");break;
            scanf("%f",&r);
            printf("\n Area= %0.2f",3.14*r*r); break;
        case 3: printf("\n Enter the length & breadth of the rectanlge: ");
            scanf("%f%f",&l,&b);
            printf("\n Area=%0.2f",l*b);
        default:printf("\n Invalid number");
    }
}
