/*
    1 4 9 16 25  ...... 1000
    
    1) creat variable.
    2)creat logic for looping.
    3)giving variables value 1.
      print 1
      number = number * number //4
      print 4
      number = number * number //9
      print 9 
      number = number * number //16
*/
#include<stdio.h>
void main()
{
    printf("WELCOME TO JOYATO.\n");
    
    int number=1;
    
    printf("%d ",number);
    
    number = number + 1;
    
    while(number<=100)
    {
        number = number * number;
        printf("%d ",number);
    }
    
    printf("\ngood bye...");
}