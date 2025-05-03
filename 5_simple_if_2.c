/*
     write a program to findout whether shape is portrait landscape or square from given length and width.
     _______________________________________________________________________________........
     1 = creat variables..
     2 = tack value from user and input value into variables.
     3 = creat comparison logic.
     4 = print output.
*/

#include<stdio.h>
void main()
{
    printf("welcome to joyato.");

    int length,width;

    printf("\nEnter length. :- ");
    scanf("%d",&length);

    printf("\nEnter width. :- ");
    scanf("%d",&width);

    if(length>width)
    {
        printf("\nthis is a portrait shape.");
    }
    
    if(length<width)
    {
        printf("\nthis is a landscape shape.");
    }

    if(length==width)
    {
        printf("\nthis is a square shape.");
    }

    printf("\nGood by....");
}