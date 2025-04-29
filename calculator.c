/*
    program to understand concept of process 
*/
#include<stdio.h>
void main()
{
    
    int num1,num2,add,sub,mul;
    float div; 
    //input 
    printf("Enter number 1");
    scanf("%d",&num1);
    printf("Enter number 2");
    scanf("%d",&num2);
    

    add = num1 + num2;
    
    sub = num1 - num2;
    
    mul = num1 * num2;
    
    div = (float)num1  / num2;
    
    printf("addition = %d subtraction = %d multiplication = %d division = %f",add,sub,mul,div);
    
}

