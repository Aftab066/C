#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No1=0,No2=0,i=0;
    printf("Enter The First Number : ");
    scanf("%d",&No1);
    fflush(stdin);
    printf("Enter The Second Number :");
    scanf("%d",&No2);

    for(i=1;i<=No2;i++)
    {
        printf(" %d ",No1);
    }
    getch();
    return 0;
}
