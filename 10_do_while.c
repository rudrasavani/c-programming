/*
    100,81,64,49,36,25,16,9,4,1;

    steps/
    1)craet variables.
    2)display count= 100;
      sum= count * count;
      count = count - 1;
    3)display all value and result;
*/

#include<stdio.h>
void main()
{
    int count=10,sum;

    do
    {
        sum=count * count;
        printf("%10d",sum);
        count--;
    }while(count>=1);

    printf("\nGood bye...");
}