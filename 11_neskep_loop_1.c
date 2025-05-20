/*print
    *
    **
    ***
    ****
    *****

    steps
    1)creat variables.
    2)creat logic for printing.
    3)print all results.
*/
#include<stdio.h>
void main()
{
    printf("WELCOME TO JOYATO.\n");

    int i,j;

    for(j=1;j<=5;j++)
    {
        for(i=1;i<=j;i--)
        {
            printf("* ");
        }
        printf("\n")
    }

}