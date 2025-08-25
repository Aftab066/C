#include<stdio.h>
#include<conio.h>

int main()
{
    int R=0,C=0,spt=0,ept=0;
    printf("Enter The Range");
    scanf("%d",&spt);
    printf("Enter The Range");
    scanf("%d",&ept);
    if(spt<ept)
    {
    for(R=1;R<=10;R++)
    {
        for(C=spt;C<=ept;C++)
    {
        printf("% 3d",R*C);
    }
        printf("\n");
    }

    }
    else
    {
       for(R=1;R<=10;R++)
    {


        for(C=spt;C>=ept;C--)
    {
        printf("% 3d",R*C);
    }
        printf("\n");
    }
    }
    getch();
    return 0;
}
