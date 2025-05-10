/*
    Write a programe to findout planets name from the user given number 
    _____________________________________________////
    steps
    1)creat vairables.
    2)tack value from user and store it in variables.
    3)creat logic for shoeing planet name.
    4)display all result.
*/

#include<stdio.h>
void main()
{
    int number = 0;

    printf("__*___WELCOME TO JOYATO___*__");
    printf("\nGive me planet number. :- ");
    scanf("%d",&number);

    switch(number)
    {
        case 1:
        printf("\nplanet name.:- MERCURY");
        break;

        case 2:
        printf("\nplanet name.:- VENUS");
        break;

        case 3:
        printf("\nplanet name.:- EARTH");
        break;

        case 4:
        printf("\nplanet name.:- MARS");
        break;

        case 5:
        printf("\nplanet name.:- JUPITER");
        break;

        case 6:
        printf("\nplanet name.:- SATURN");
        break;

        case 7:
        printf("\nplanet name.:- URENUS");
        break;

        case 8:
        printf("\nplanet name.:- PLUTO");
        break;  

        default:
        printf("\nOur solar system have only 8 planets.");
        printf("\nEnter vailed number of planet.");
    }

    printf("\nGood by...");

}