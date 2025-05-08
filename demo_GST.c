/*
    write a program to accept monthly income from user and then calculate annual gross income, net come and tax amount as per below income tax rule
    From Rs. 12,00,001 to Rs. 16,00,000	15%
    From Rs. 16,00,001 to Rs. 20,00,000	20%
    From Rs. 20,00,001 to Rs. 24,00,000	25%
    Above Rs. 24,00,001	30%
*/

#include <stdio.h>

void main() 
{
    float monthly_Income,gross_Income,tax = 0, net_Income;
    
    printf("WELCOME TO JOYATO.");
    printf("\nlet's calculate GST income.");
    
    printf("\nEnter your monthly income :- ");
    scanf("%f", &monthly_Income);

    gross_Income = monthly_Income * 12;

    if (gross_Income > 2400000)
    {
        tax = gross_Income * 0.30;
    } 
    else if (gross_Income > 2000000) 
    {
        tax = gross_Income * 0.25;
    }
     else if (gross_Income > 1600000)
    {
        tax = gross_Income * 0.20;
    }
     else if (gross_Income > 1200000)
    {
        tax = gross_Income * 0.15;
    } else
    {
        tax = 0; 
    }
    
    net_Income = gross_Income - tax;

    printf("gross Income :- Rs.%.2f\n",gross_Income);
    printf("GST Tax Amount :- Rs.%.2f\n",tax);
    printf("Net Annual Income :- Rs.%.2f\n",net_Income);
    
    printf("Good by....");
}
    