/*
    1 4 7 10 
   
   1)creat a variable.
   2)creat logic for this loop.
   3)display output 
*/
#include<stdio.h>
void main()
{
   printf("WELCOME TO JOYATO.\n");
   
   int number=1,count;
   
   count=0;
   while(count<4)
   {
     printf("%d ",number);
     number = number + 3;
     count++;
   }
   
   printf("\nGood by...");
}