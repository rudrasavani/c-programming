/*
    write a program to findout given number is prime number or not

    steps
    -----------------------------------/////
    1 create variable number,reminder,divisor
    2 accept input from user into number variable
    3 store 2 into divisor
    4 get reminder by dividing number with divisor
      reminder(1) = number(13) % divisor(2)
    5  if reminder is zero then
        print message number is not prime number
    6  divisor(3) = divisor + 1

    7   get reminder by dividing number with divisor
        reminder(1) = number(13) % divisor(3)
    8 if reminder is zero then
        print message number is not prime number
    9   divisor(4) = divisor + 1

    10 get reminder by dividing number with divisor
        reminder(1) = number(13) % divisor(4)
    11 if reminder is zero then
        print message number is not prime number
*/
#include<stdio.h>
void main()
{
    printf("WELCOME TO JOYATO.");

    int number,reminder,divisor=2;

    printf("\nEnter your number.");
    scanf("%d",&number);

    while(divisor<number)
    {
        reminder = number % divisor;
    if(reminder==0)
    {
        printf("\nthis number is not prime number.");
        break;
    }
    divisor= divisor + 1;
    }
    
    if(divisor==number)
    {
        printf("\nis prime number.");
    }

    printf("\nGood bye...");
}