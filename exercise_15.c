/*
    write a program to findout whether given number is Abundant Numbers or not 
   
   1)creat a variable.
   2)creat logic for this loop.
   3)display output 
*/
#include <stdio.h>

void main() {
    int num,i, sum = 0;

    printf("Enter a number. :- ");
    scanf("%d", &num);
    
    for ( i = 1; i < num; i++)
    {
        if (num % i == 0) 
        {
            sum = sum + i;
        }
    }

    if (sum > num) 
    {
        printf("This is an Abundant Number.\n");
    }
    else 
    {
        printf("This is NOT an Abundant Number.\n");
    }
}
