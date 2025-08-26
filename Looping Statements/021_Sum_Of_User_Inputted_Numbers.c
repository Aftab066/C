#include<stdio.h>
#include<conio.h>

int main()
{
    int Dig=0,No=0,Temp=0,sum=0,No2=0,i=0;
    printf("Enter The 3 Or More Numbers To Get The Sum : ");
    scanf("%d",&No);
    Temp=No;

    for(i=0;i<=Temp;i++)
    {
        Dig=Dig%Temp;
        sum+=Dig;
        Temp=Temp/10;
        //No2=Dig;
        printf("%d + = %d",No,sum);
    }
    getch();
    return 0;
}
