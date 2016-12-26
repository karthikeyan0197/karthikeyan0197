#include<stdio.h>
void main()
{
    int sum=0,n,a;
     printf("\n Enter the Integer:\t");
     scanf("%d",&n);
     while(n!=0)
     {
         a=n%10;
         ++sum;
         n=n/10;
     }
            printf("%d",sum);



}
