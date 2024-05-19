// Program to define a structure
#include<stdio.h>
struct personal
{
    char name[20];
    int D,Y,M;
    float salary;
}x;
int main()
{
    printf("\n Input the values: ");
    scanf ("%s %d %d %d %f",x.name,&x.D,&x.M, &x.Y, &x.salary);
    printf ("%s %d %d %d %F\n", x.name, x.D,x.M,x.Y, x.salary);
}