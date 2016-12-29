#include<stdio.h>
#include<ctype.h>
void cmpr(char);
static int a[26];
void main()
{
    char g[100],i,flag=0;
    printf("\n Enter the string:\n");
    gets(g);
    if(strlen(g)<26)
    {
        printf("\n The entered string is not a pangram");
        exit(0);
    }
    else
    {

        for(i=0;i<strlen(g);i++)
            {
                if(isupper(g[i]))
                    cmpr(tolower(g[i]));
                else
                    cmpr(g[i]);
            }
        for(i=0;i<26;i++)
        {
            if(a[i]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("\n The entered string is not a pangram");
        else
            printf("\n The entered string is a pangram");
    }
}
void cmpr(char c)
{
    switch(c)
    {
        case 'a': a[0]+=1;
                    break;
        case 'b': a[1]+=1;
                    break;
        case 'c': a[2]+=1;
                    break;
        case 'd': a[3]+=1;
                    break;
        case 'e': a[4]+=1;
                    break;
        case 'f': a[5]+=1;
                    break;
        case 'g': a[6]+=1;
                    break;
        case 'h': a[7]+=1;
                    break;
        case 'i': a[8]+=1;
                    break;
        case 'j': a[9]+=1;
                    break;
        case 'k': a[10]+=1;
                    break;
        case 'l': a[11]+=1;
                    break;
        case 'm': a[12]+=1;
                    break;
        case 'n': a[13]+=1;
                    break;
        case 'o': a[14]+=1;
                    break;
        case 'p': a[15]+=1;
                    break;
        case 'q': a[16]+=1;
                    break;
        case 'r': a[17]+=1;
                    break;
        case 's': a[18]+=1;
                    break;
        case 't': a[19]+=1;
                    break;
        case 'u': a[20]+=1;
                    break;
        case 'v': a[21]+=1;
                    break;
        case 'w': a[22]+=1;
                    break;
        case 'x': a[23]+=1;
                    break;
        case 'y': a[24]+=1;
                    break;
        case 'z': a[25]+=1;
                    break;
        default: '\0';
                break;
    }
}

