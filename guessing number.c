#include<stdio.h>
int main()
{
    int secretnumber,guessnumber;
    secretnumber=8;
    int i,guesslimit;
    guesslimit=5;
    for(i=1;i<=guesslimit;i++)
    {
        printf("guess number %d:",i);
        scanf("%d",&guessnumber);
        if(guessnumber==secretnumber)
        {
            printf("u won");
            break;
        }
    }
    if(guessnumber!=secretnumber)
    {
        printf("u lost");
    }
    return 0;
}
