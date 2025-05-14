/*
    0,1,1,2,3,5,8,13,21,34.....

    steps
    1) creat 2 variables.
    2) 1st variables is 0 and 2nd is 1.
    3) creat logic for counting.
    4)display all value.
*/

#include<stdio.h>
void main()
{
    printf("WELCOME TO JOYATO.\n");

    int a=0,b=1,c;

    printf("%d %d ",a,b);

    c = a+b;
    printf("%d ",c);

    while(c<=100)
    {
    a =b;
    b=c;
    c = a+b;
    printf("%d ",c);
    }
}