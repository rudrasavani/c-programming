/*
    
    write a program to accept monthly income from user and then calculate annual gross income, net come and tax amount as per below income tax rule
    From Rs. 12,00,001 to Rs. 16,00,000	15%
    From Rs. 16,00,001 to Rs. 20,00,000	20%
    From Rs. 20,00,001 to Rs. 24,00,000	25%
    Above Rs. 24,00,001	30%

    1 = creat variables.
    2 = tack input from user and store it in variables.
    3 = craet logic for calculation tax and income.
    4 = store all value in variables and display it.

*/

#include<stdio.h>
void main()
{
    float monthly_income,cross_income,gst_tax,net_income,total;

    printf("Enter your monthly income. :- ");
     scanf("%f",&monthly_income);

    printf("\nOk your monthly income :- %.2f.",monthly_income);

    cross_income = monthly_income * 12;

    printf("\nyour gross income :- %.2f",cross_income);

    if(cross_income<1200001)
    {
        printf("\nYou don't have to pay any taxes.");
    }
    else if(1200001<cross_income<1600000)
    {
        gst_tax = (cross_income * 15) / 100;

        printf("\nyour total tax :- %.2f",gst_tax);

        net_income = cross_income - gst_tax;
        total = gst_tax + cross_income;

        printf("\nyour net income :- %.2f",net_income);
        printf("\nyour income with GST :- %.2f",total);
    }
    else if(16,00,001 <cross_income<20,00,000)
    {
        gst_tax = (cross_income * 20) / 100;

        printf("\nyour total tax :- %.2f",gst_tax);

        net_income = cross_income - gst_tax;
        total = gst_tax + cross_income;

        printf("\nyour net income :- %.2f",net_income);
        printf("\nyour income with GST :- %.2f",total);
    }
    else if(20,00,001 <cross_income<24,00,000)
    {
        gst_tax = (cross_income * 25) / 100;

        printf("\nyour total tax :- %.2f",gst_tax);

        net_income = cross_income - gst_tax;
        total = gst_tax + cross_income;

        printf("\nyour net income :- %.2f",net_income);
        printf("\nyour income with GST :- %.2f",total);
    }
    else 
    {
        gst_tax = (cross_income * 30) / 100;

        printf("\nyour total tax :- %.2f",gst_tax);

        net_income = cross_income - gst_tax;
        total = gst_tax + cross_income;

        printf("\nyour net income :- %.2f",net_income);
        printf("\nyour income with GST :- %.2f",total);
    }
}
