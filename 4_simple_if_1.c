/*
     write a program to convert 24 hours format time and 12 hours format time and display it.
     __________________________________________________________________________________________...
     1 = creat variables.
     2 = tack input froom user into variables.
     3 = creat logic for outout.
          if hours<12 
            display hours with AM message
        if hours>11
            hours = hours - 12 (3)
            display hours with PM message 
     4 = print outputs.
*/

#include<stdio.h>
void main()
{
    printf("welcome to joyato.");
    printf("\nI am your hour translater form 24 hour formate to 12 hours.")
    int hours;

    printf("\nEnter your hours into 24 hours formate. :- ");
    scanf("%d",&hours);

    if(hours<12)
    {
        printf("Hours = %d Am",hours);
    }
    if(hours > 11)
    {
        hours = hours - 12;
        printf("Hours = %d Pm",hours);
    }

    printf("\n Good by....");
}