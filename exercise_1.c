/*
 write a program to findout whether business man has made profit or loss from given purchase and sales price. 
____________________________________________________________________________....
1 = creat variables.
2 = tack value from user and save value into variables.
3 = creat logic for counting profit or lost.
    profit =selling price - buying price
    lost = buying price - seling price
4 = print result.
*/

#include<stdio.h>
void main()
{
    int sellingprice,buyingprice,counting;

    printf("Welcome to joysto.");
    printf("Let's count your profit or lost.\n");

    printf("\nEnter your buying price. :- ");
    scanf("%d",&buyingprice);

    printf("\nEnter your selling price. :- ");
    scanf("%d",&sellingprice);

    counting = sellingprice - buyingprice;

    if(counting>(buyingprice-sellingprice))
    {
        printf("\nprofit = %d",counting);
        printf("\nyou tack many pofit.");
    }

    if(counting<(buyingprice-sellingprice))
    {
        counting = buyingprice - sellingprice;
        printf("\nlost = %d",counting);
        printf("\nyou tack many lost.try to get pofit.");
    }

   printf("\nGood by....");
}