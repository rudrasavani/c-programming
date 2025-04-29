/* 
    write a program to convert given inches into foot 
    steps 
    ------------------------------------------------
    1 - create float variable inch & foot 
    2 - accept inches from users and store into inches 
    3 - convert inches into foot 
            12 inch = 1 foot 
         foot = inch / 12     
    4 - display foot 
*/
#include<stdio.h>
void main()
{
    float inches,foot;
    printf("enter inches");
    scanf("%f",&inches);
    
    foot = inches/12;
    
    printf("foot = %.2f",foot);
    
}

