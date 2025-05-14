/*
     100 98 96 94 .... 0
     _________________________/////..
     steps

     1)creat variable.
     2)creat logic.
       save value 100 in variables.
       display value.
       number = number - 1;//99
       display value.
       number = number - 1;//98
       display value.
       number = number - 1;//97
       display value.
        number = number - 1;//96
       display value.

*/
#include<stdio.h>
void main()
{
    int number = 100;
    printf("%d ",number);

    while(number>=1)
    {
    number = number - 1;
    printf("%d ",number);
    }
    printf("\nGood bye...");
}
