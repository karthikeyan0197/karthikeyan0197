#include<stdio.h>
main()
{
    int n,orig,rev=0,rem;
    printf("\n Enter the Number:");
    scanf("%d",&n);
    orig=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(orig==rev)
        printf("\n The entered number is a palindrome");
    else
     printf("\n The entered number is not a palindrome");

}
