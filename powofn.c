#include<stdio.h>
void main()

{
    int x,y,z;
    printf("\nEnter the 2 Numbers:\t");
    scanf("%d %d",&x,&y);
    z=pow(x,y);
    printf("The %d to the power %d is : \t %d",x,y,z);

}
