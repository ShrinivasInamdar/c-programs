//days of week
#include<stdio.h>
int main()
{
    int n;
    printf("\n 1) Sunday \n 2)Monday\n3) Tuesday\n4)Wednesday\n5)Thursday\n6)Friday\n7)Saturday");
    printf("\n Enter the number assigned \nto the day to be displayed: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("\n Sunday"); break;
        case 2: printf("\n Monday");break;
        case 3: printf("\n Tuesday");break;
        case 4: printf("\n Wednesday");break;
        case 5: printf("\n Thursday");break;
        case 6: printf("\n Friday");break;
        case 7: printf("\n Saturday");break;
        default:printf("\n Invalid number");
    }
    
}
