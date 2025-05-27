/*
    write a program to accept value in array and display it

*/
#include<stdio.h>
void main()
{
    int num[5],pos=0;

    while(pos<=4)
    {
        printf("Enter your number. :- ");
        scanf("%d",&num[pos]);
        pos = pos + 1;
    }
    pos=0;

    while(pos<=4)
    {
        printf("\n%d",num[pos]);
        pos = pos +1;
    }
}