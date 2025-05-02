/*
 assignment operators are used to write down any mathematical expressions in shorter way. 
 _+____________________________________________________________________________________-
  assignment operators 
    += can be as a+=b when we need write a = a + b
    += can be as a+=1 when we need write a = a + 1
    -= can be as a-=b when we need write a = a - b
    *= can be as a*=b when we need write a = a * b
    /= can be as a/=b when we need write a = a / b
    %= can be as a%=b when we need write a = a % b

*/
#include<stdio.h>
void main()
{
    printf("Hello coder...")
    int a =100,b = 50;

    printf("\na = %d b = %d",a,b);

    //a = a+b
    
    a+=b;
    printf("\na =%d b = %d",a,b);

    //a =a-b
    a-=b;
    printf("\na =%d b = %d",a,b);

    //a=a*b
    a*=b;
    printf("\na =%d b = %d",a,b);

    //a= a/b
    a/=b;
    printf("\na =%d b = %d",a,b);

    printf("\nproject = 3_assignment opraters.c";)
    printf("GOOD BY...");
}