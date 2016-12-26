#include<stdio.h>
main()
{
    int n,fact=1,i;
    printf("\n Enter the number to find factorial:\t");
    scanf("%d",&n);
    if(n<0)
        printf("\nCan't Find factorial");
    else
    {
        for(i=1;i<=n;++i)
        fact=fact*i;
    }
    printf("factorial:\t%d",fact);
}
