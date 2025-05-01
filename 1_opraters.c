/*
    *|relational operators*
____________________________________________________________________________________
 1 == used to check 2 variable has same value or not  
  2 != used to check 2 variable has different value or not  
  3 <  used to check whether left side variable is less then right side variable or not 
  4 >  used to check whether right side variable is greater then left side variable or not 
  5 <= used to check left side variable is less then or equal to right side variable
  6 >=used to check right side variable is greater then or equal to left side variable
*/
#include<stdio.h>
void main()
{
    int a=50;
    int b=100;
    int c=150;
    int result;

    result = a==b;//50==100=false(0)
    printf("%d = %d==%d",result,a,b);

    result = a!=b;//50!=100=true(1)
    printf("\n%d = %d!=%d",result,a,b);

    result = a < b;//50<100=true(1)
    printf("\n%d = %d < %d",result,a,b);

    result = a > b;//50>100=false(0)
    printf("\n%d = %d > %d",result,a,b);

    result = a <= b;//50<=100=true(1)
    printf("\n%d = %d<=%d",result,a,b);

    result = a >= b;//50>=100=false(0)
    printf("\n%d = %d >= %d",result,a,b);
    
}