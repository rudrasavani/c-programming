/*  write a program to print following pattern 
    * * * * *
    * * * * 
    * * * 
    * * 
    * 

    steps
    1)creat variables.
    2)creat logic.
    3)print all results.
*/
#include<stdio.h>
void main()
{
    printf("WELCOME TO JOYATO.\n");

    int i,j;

    for(j=1;j<=5;j++)
    {
        for(i=5;i>=j;i--)
        {
            printf("* ");
        }printf("\n");
    }
}