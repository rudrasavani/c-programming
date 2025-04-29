/*
write a program to calculate ceilcus of given fahrenheit.
---------------------------------------------------------
step 1= create variable.
step 2= creat user's input system.
step 3= creat logic for proses system.
step 4= creat display system for output.

*/

#include<stdio.h>
void main()
{
    float celcius,fahrenheit;
    
    printf("WELCOME TO JOYATO.");
    printf("\nEnter fahrenheit. :- ");
    
    scanf("%f",&fahrenheit);
    
   celcius = (fahrenheit - 32) * 5 / 9;
   
    printf("\n°C = %.2f",celcius);
    
}