#include<stdio.h>
main()
{
    int i,j,k;
    printf("\n Enter the 2 Intervals:\t");
    scanf("%d %d",&i,&j);
    for(k=i+1;k<=j-1;k++)
    {

        if(k%2==0)

              printf("%d\t",k);


    }
}

