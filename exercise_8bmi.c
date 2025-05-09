/*
    write a program to calculate bmi and display obesity level of person from given height
    (foot and inch) and weight.
    __________________________________________________________////
    steps
    1 = creat variables.
    2 = tack input from user ans store it in variables.
    3 = craet logic for comparing all data.
        inches = (Feet * 12) + Inches
        1 inch = 2.54 cm.
        1 meter = 100cm
        BMI = weight (kg) / (height (m))^2
    4 = display all variables.
*/

#include<stdio.h>
void main()
{
    float weight,height,inch,foot,cm,meter,bmi,inches;

    printf("WELCOME TO JOYATO.");

    printf("\nEnter your foot. :- ");
    scanf("%f",&foot);

    printf("\nEnter your inch. :- ");
    scanf("%f",&inch);

    printf("\nEnter your weight(kg). :- ");
    scanf("%f",&weight);
    
    inches = inch + (foot * 12);
    meter = inches * 39.37;
    height = meter * meter;
    bmi =  weight / height ;

    printf("\n-------your data--------");
    printf("\nweight = %.2f \nhight(m) = %.2f \ninches = %.2f",weight,meter,inches);

    printf("\nbmi = %f",bmi);
}