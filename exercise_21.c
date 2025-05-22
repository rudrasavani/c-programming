/*
        *
       * *
      * * * 
     * * * *
    * * * * *
*/
#include<stdio.h>
void main()
{
    printf("WELCOME TO JOYATO\n");

    int row,colum,n;

    for(colum=0;colum<=4;colum++)
    {
        for(row=5;row>=colum;row--)
        {
            printf(" ");
        }
        for(row=0;row<=colum;row++)
        {
            printf("* ");
        }
        printf("\n");
    }
}