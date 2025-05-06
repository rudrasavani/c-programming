/*
    write a program to findout which stock will give better return in terms dividend per 100 Rs from given 2 stock's market price and last year dividend.
    ______________________________________________________________________________.....
    steps
    1 = creat variyebles.
    2 = tack share and dividend value from user.
    3 = creat logic for counting dividend and more.
    4 = displaying all results.
*/
#include<stdio.h>
void main()
{
    int shareno_1,shareno_2,total1,total2;
    float share_1,share_2,dividend_1,dividend_2,profitable_share_1,profitable_share_2,total_divi1,total_divi2;

    printf("Enter your 1st share quantity. :- ");
    scanf("%d",&shareno_1);

    printf("\nEnter your 1st share price. :- ");
    scanf("%f",&share_1);

    printf("\nEnter your 1st share dividend(plz enter 1 share dividend). :- ");
    scanf("%f",&dividend_1);

    printf("\nEnter your 2nd share quantity. :- ");
    scanf("%d",&shareno_2);

    printf("\nEnter your 2nd share price. :- ");
    scanf("%f",&share_2);

    printf("\nEnter your 2nd share divident. :- ");
    scanf("%f",&dividend_2);

    
    total_divi1 = total1 * dividend_1;
    total_divi2 = total2 * dividend_2;

    profitable_share_1 = shareno_1 * share_1 * dividend_1 ;
    profitable_share_2 = shareno_1 * share_2 * dividend_2 ;
    
    if(profitable_share_1>profitable_share_2)
    {
        printf("\ntotal investment on 1st share. = %d",total1);
        printf("\ntotal dividend in 1st share. = %.2f",total_divi1);
        printf("\ntotal investment on 2nd share. = %d",total2);
        printf("\ntotal dividend on 2nd share. = %.2f",total_divi2);
        printf("\n1st share is giving batter return compering 2nd share.");
    }
    else
    {
        printf("\ntotal investment on 1st share. = %d",total1);
        printf("\ntotal dividend in 1st share. = %.2f",total_divi1);
        printf("\ntotal investment on 2nd share. = %d",total2);
        printf("\ntotal dividend on 2nd share. = %.2f",total_divi2);
        printf("\n2nd share is giving batter return compering 1st share.");
    }

    printf("\nGood by....");
}