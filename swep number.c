/*
write a program to swap value of two variable using 3rd variable.
___________________________________________________________________
1 = creat variable.
2 = creat logic for swaping values.
3 = creat logic for displaying results.
4 = let 'a'=20
        'b'=40
*/
#include<stdio.h>
void main()
{
    int a,b,c;
    
    printf("enter a : ");
    scanf("%d",&a);
    
    printf("enter b : ");
    scanf("%d",&b);
    
    printf("a = %d b =%d",a,b);
    
    c = b+a;//30+10=40
    b = c-b;
    a =c-b; 
    
    printf("\n a = %d b = %d",a,b);
}