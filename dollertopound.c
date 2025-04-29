/*
   coding staps :
   __________________________
   1=creat a variables.
   2=asking a value of dollar.
   3=creat user's input system.
   4=creat logic of converting dollar into pounds.
   5=finely print all answer in pounds.
*/
#include<stdio.h>
void main()
{
    float dollar,pound;
    
    printf("enter your dollar : ");
    scanf("%f",&dollar);
    
   pound = dollar * 1.33;
    
    printf("pound = %.2f",dollar);
    
    
}