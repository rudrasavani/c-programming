/*
    print folowing sentences
    1
   21
  321
 4321
54321

    1)creat variables.
    2)creat logic.
    3)print all results.
*/

#include<stdio.h>
void main()
{
    printf("WELCOME TO JOYATO.\n");

    int row,colum,num;

    for(colum=1;colum<=5;colum++)
    {
        for(row=4;row>=colum;row--)
        {
            printf("  ");
        }
        for(num=colum;num>=1;num--)
        {
            printf("%d ",num);
        }
        printf("\n");
    }

    printf("\nGOOD BY...");
}