#include<stdio.h>
#include<string.h>
void main()
{
    char n[45];
    int p;

    printf("\n Enter the integer:\t");
    scanf("%s",&n);
    if(n!=0)
        p=strlen(n);
    printf("%d",p);


}

