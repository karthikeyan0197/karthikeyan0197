#include<stdio.h>
void main()
{
    int sum=0,n,i;
     printf("\n Enter the number to find till sum:\t");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
        sum=sum+i;

     printf("%d",sum);
     getch();
}

