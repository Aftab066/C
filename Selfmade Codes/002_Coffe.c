#include<stdio.h>
#include<conio.h>
int main()
{
    int coffee;
    printf("\nWELCOME TO OUR COFFEE SHOP");
    up:
    printf("\n So What Do You Like To Take \n 1. Coffee \n 2. Tea\n");
    scanf("%d",&coffee);
    switch(coffee)
    {
case 1:
    printf("\nHere's The Coffee ");
    break;
case 2:
    printf("\nHere's The Tea ");
    break;
default:
    printf("\nPlease Enter Valid Choice  ");
    goto up;
    break;
}
printf("\nThanks For Visiting");
getch();
return 0;
}

