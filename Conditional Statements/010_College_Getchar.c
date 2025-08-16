#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int fee;
    char  ch, a;

    printf(" *****-Welcome-****** ");
    Top:
    printf("\n\n Which Stream Do You Want : \n 1> Science \n 2> Commerce \n 3> Arts\n");
    ch = getchar();

    if (ch=='s' || ch=='S')
    {
        printf("\n You Have Selected Science Stream");
        printf("\n There Are Following Subjects For The Science Stream");
        printf("\n Compulsory Subjects \n 1> English \n 2> Marathi \n 3>Physics \n 4>Chemistry \n  ");
        printf("\n Optional Subjects \n 1> Maths \n 2> Biology \n 3>Geology \n ");
        printf("\n Select One Or More Optional Subjects For Further Process\n");
        getch();
    }
    else if(ch=='c' || ch=='C')
    {
        printf("\n You Have Selected Commerce Stream");
        printf("\n There Are Following Subjects For The Commerce Stream");
        printf("\n Compulsory Subjects \n 1> English \n 2> Economics \n 3>Business Studies \n 4>Mathematics\n  ");
        printf("\n Optional Subjects \n 1> Physical Education(PE) \n 2> Home Science \n 3>Informatics Practices \n ");
        printf("\n Select One Or More Optional Subjects For Further Process\n");
        getch();
    }
    else if(ch=='a' || ch=='A')
    {
        printf("\n You Have Selected Arts Stream");
        printf("\n There Are Following Subjects For The Arts Stream");
        printf("\n Compulsory Subjects \n 1>Geography  \n 2> Marathi \n 3>Hindi \n 4>Political Science \n  ");
        printf("\n Optional Subjects \n 1> Computer science \n 2> Sociology \n 3>Economics \n ");
        printf("\n Select One Or More Optional Subjects For Further Process\n");
        getch();
    }
    else
    {
        printf("\n Invalid Input...\n Select Valid Stream...");
        fflush(stdin);
        goto Top;
    }

    fflush(stdin);
    Middle:
    ch = getchar();
    if (ch=='m' || ch=='M' || ch=='b' || ch=='B' || ch=='g' || ch=='G')
    {
        printf("\nYou Have Selected All The Groups");
        printf("\nThe Following Is The Fee Structure For Above Groups");
        printf("\n 1> Admission Fee : 9850/- \n 2> Uniform : 2000/- \n Total : 11850/- ");
        printf(" Are Your Confirm For The Admission(Please Use Y/y For Yes, N/n For NO)\n");
        getch();
    }
    else if(ch=='p' || ch=='P' || ch=='h' || ch=='H' || ch=='i' || ch=='I')
    {
        printf("\nYou Have Selected All The Groups");
        printf("\nThe Following Is The Fee Structure For Above Groups");
        printf("\n 1> Admission Fee : 4757/- \n 2> Uniform : 2000/- \n Total : 6757/- ");
        printf(" Are Your Confirm For The Admission (Please Use Y/y For Yes, N/n For NO)\n");
        getch();
    }
    else if(ch=='c' || ch=='C' || ch=='z' || ch=='Z' ||  ch=='e' || ch=='E')
    {
        printf("\nYou Have Selected All The Groups");
        printf("\nThe Following Is The Fee Structure For Above Groups");
        printf("\n 1> Admission Fee : 2500/- \n 2> Uniform : 2000/- \n Total : 4500/- ");
        printf(" Are Your Confirm For The Admission(Please Use Y/y For Yes, N/n For NO)\n");
        getch();
    }
    else
    {
        printf("\n You Have Selected None Of These Subjects, Select Valid Choice...");
        goto Middle;
    }

    fflush(stdin);
    ch = getchar();

    up:

    if (ch=='y' || ch=='Y')
    {
        printf("\n Congratulations Your Admission Has Been Confirmed\n");
    }
    else if(ch=='n' || ch=='N')
    {
        printf("\n We Are Sorry To Say That You Have Cancelled The Admission Process\n");
    }
    else
    {
        printf("\n Invalid Input");
        goto up;
    }

    printf("\n\n Thank You For Visiting The College");

    getch();
    return 0;
}
