/*
    write a program to calculate bmi and display obesity level of person from given height
    (foot and inch) and weight.
    ______________________________________________________________________-----////
    steps
    1 = creat variables.
    2 = tack value from user and store it in variables.
    3 = creat logic for counting bmi.
        1)1 inch = 2.54 cm.
        2)1 m = 100 cm.
        3)1 meter = 39.37 inch.
        4)bmi = weight / (hight * hight).
    4 = display all value.    
*/

#include<stdio.h>
void main()
{
    int foot,inch;
    float hight,weight,meter,inch_1,bmi;

    printf("WELCOME TO JOYATO.");
    printf("\nlet's count your bmi.");
    
    printf("\nEnter your weight(kg). :- ");
    scanf("%f",&weight);
    
    printf("\nEnter your hight:");
    printf("\nFoot :- ");
    scanf("\n%d",&foot);
    printf("inch :- ");
    scanf("%d",&inch);
    
    inch_1 = foot * 12 + inch;
    meter = inch_1 * 2.54 / 100;
    hight = meter;
    bmi = weight / (hight * hight);
    
    printf("\n:_________YOUR DATA_________:");
    printf("\nweight = %.2f\nfoot = %d\ninch = %d\nBMI = %.1f",weight,foot,inch,bmi);
    
    if(bmi>=35)
    {
        printf("\nsorry our server is blast try next time...");
    }
    else if(bmi>=34.9)
    {
        printf("\nextremli obese.");
    }
    else if(bmi>=29.9)
    {
        printf("\nobese.");
    }
    else if(bmi>=24.9)
    {
        printf("\nover obese");
    }
    else if(bmi>=18)
    {
        printf("\nunder weight.");
    }
    else 
    {
        printf("\nover light weight");
    }
    
    printf("\nGood by...");
}
