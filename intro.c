#include<stdio.h>
void main()
{
    printf("welcome to joyato.");
    
    int amount,hundred,fifty,twenty,ten,five,two,one;
    printf("\nEnter your amount. :- ");
    scanf("%d",&amount);

    hundred=amount / 100;
    amount=amount - (hundred * 100);

    fifty=amount / 50;
    amount=amount - (fifty * 50);

    twenty=amount / 20;
    amount=amount - (twenty * 20);

    ten=amount / 10;
    amount=amount - (ten * 10);

    five=amount / 5;
    amount=amount - (five * 5);

    two=amount / 2;
    amount=amount - (two * 2);

    one=amount / 1;
    amount=amount - (one * 1);

    printf("\n ₹100 = %d",hundred);
    printf("\n ₹50 = %d",fifty);
    printf("\n ₹20 = %d",twenty);
    printf("\n ₹10 = %d",ten);
    printf("\n ₹5 = %d",five);
    printf("\n ₹2 = %d",two);
    printf("\n ₹1 = %d",one);
} 