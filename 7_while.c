/*
    write a program to calculate compound interest of given amount rate and year
    1   create variable amount,rate,year,interest
    2   accept input in amount,rate and year variable
        //                1000	10	    1
    3   calculate simple interest for 1 year  and store in interest variable
        interest (100) = (amount * rate * 1) /100
        amount (1100) = amount + interest

    4   calculate simple interest for 2 year  and store in interest variable
        interest (110) = (amount * rate * 1) /100
        amount (1210) = amount + interest

    5   calculate simple interest for 3 year  and store in interest variable
        interest (121) = (amount * rate * 1) /100
        amount (1331) = amount + interest

*/

#include<stdio.h>
void main()
{
    printf("WELCOME TO  JOYATO.");

    int year,count;
    float amount,rate,interest;

    printf("\nEnter amount. :- ");
    scanf("%f",&amount);

    printf("\nEnter rate. :- ");
    scanf("%f",&rate);

    printf("\nEnter year. :- ");
    scanf("%d",&year);
    count = 1;

    while(count<=year)
    { 
    interest = (amount * rate *1)/100;
    amount = amount + interest;
    count = count + 1;
    }
    printf("%.2f  %.2f",interest,amount);

    printf("\nGood bye...");
}