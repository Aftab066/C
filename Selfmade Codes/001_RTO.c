#include<stdio.h>
#include<conio.h>
int main()
{
    int rto;
    printf("\nEnter Vehicle Registration RTO Number\n");
    scanf("%d",&rto);
    if(rto==11)
    {
        printf("\nYOUR RTO IS LOCATED IN SATARA");
    }
    else if(rto==12)
    {
        printf("\nYOUR RTO IS LOCATED IN PUNE");
    }
     else
    {
        printf("\nYOUR VEHICLE IS NOT REGISTERED");
    }
    getch();
    return 0;
}
