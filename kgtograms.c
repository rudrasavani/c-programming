/*
   coding staps :
   __________________________
   1=creat a variables.
   2=asking a value of kg.
   3=creat user's input system.
   4=creat logic of converting kg into grams.
   5=finely print all answer in grams.
*/
#include<stdio.h>
void main()
{
    float kg,grams;
    
    printf("enter your kg : ");
    scanf("%f",&kg);
    
    grams = kg * 1000;
    
    printf("grams = %.2f",grams);
    
    
}