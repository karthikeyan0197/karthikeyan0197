#include <stdio.h>
int main()
{
    int n,a,flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(a=2;a<=n/2;++a)
    {
        if(n%a==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);

    return 0;
}
