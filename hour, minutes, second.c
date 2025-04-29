/*
write a program to convert given seconds into hours, remaining minutes and remaining seconds
------------------------------------------------------

1 = creat variables 
2 = creat logic of scanf
3 = creat logic of displaying

*/

#include<stdio.h>
void main()
{
    int hours,minutes,seconds;
    
    printf("enter seconds : ");
    scanf("%d",&seconds);
    
    hours = seconds / 3600;
    minutes = (seconds - (hours * 3600)) / 60;
    seconds = seconds - (hours * 3600) - (minutes*60);
    
    
    
    
    printf("hours = %d minutes = %d seconds = %d",hours,minutes,seconds);
}