/*
    write a program to findout whether given year is millennium year or not. using simple decision making statements. using simple decision making statements.
    __________________________________________________________________.....
    1 = creat variables.
    2 = tack year from user and store in variables.
    3 = creat logic for saying  millennium year or not.
    4 = print answer.
*/

#include<stdio.h>
void main()
{
    int millennium,year;

    printf("welcome to joyato");
    printf("\nLet's know about millennium year.");

    printf("\nEnter your current year. :- ");
    scanf("%d",&year);

    if(year % 100==0)
    {
        printf("\nyes,this is millennium year.");
    }
    
    if(year % 100!=0)
    {
        printf("\nno,this is not millennium year.");
    }
    
    printf("\nGood by....");
}
