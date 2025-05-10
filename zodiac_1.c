/*write a program to accept birth date and month from user. decide zodiac sign from below table 
Aries: March 21–April 19
Taurus: April 20–May 20
Gemini: May 21–June 21
Cancer: June 22–July 22
Leo: July 23–August 22
Virgo: August 23–September 22
Libra: September 23–October 22
Scorpio: October 24–November 21
Sagittarius: November 22–December 21
Capricorn: December 22–January 19
Aquarius: January 20–February 18
Pisces: February 19–March 20
*/

#include<stdio.h>
void main()
{
    int date=0,month=0,year=0;

    printf("______WELCOME TO JOYATO______");
    printf("\nEnter your birth date. :- ");
    scanf("%d",&date);

    printf("\nEnter your birth month. :- ");
    scanf("%d",&month);

    printf("\nEnter your birth year. :- ");
    scanf("%d",&year);

    printf("\n your bith date = %d / %d / %d.",date,month,year);

    if(month==3 && date>=18 && date<=31)
    {
        printf("\nyour zodiac is Pisces.");
    }
    else if(month==2 && date<=18 && date<=30)
    {
        printf("\n your zodiac is Aquarius.");
    }
    else if(month==1 && date>=20 && date<=31)
    {
        printf("\nyour zodiac is Aquarius.");
    }
    else
    {
        printf("\nEnter vailed number.");
    }
}