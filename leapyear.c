#include<stdio.h>
#include<conio.h>
void main()
{
    int d;
    printf("\n Enter the number to find whether leap year or not:");
    scanf("%d",&d);
    if(d%100!=0)

        if(d%4==0||d%400==0)
            printf("\n The Given %d year is a leap year",d);


    else
        printf("The given year is not a leap year");

}
