/*
   2, 6, 18, 54, 162
   
   1)creat a variable.
   2)creat logic for this loop.
   3)display output 
*/
#include<stdio.h>
void main()
{
   printf("WELCOME TO JOYATO.\n");
   
   int number=2,count;
   
   count=0;
   while(count<5)
   {
     printf("%d ",number);
     number = number * 3;
     count++;
   }
   
   printf("\nGood by...");
}