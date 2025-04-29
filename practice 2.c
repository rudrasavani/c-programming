#include <stdio.h>

int main()
{
    printf("WELCOME TO JOYATO");
    printf("\nPlease wait, I am checking your historical data...");

    int age;
    float salary;
    char gender;

    printf("\nPlease enter your gender (m = male, f = female): ");
    scanf(" %c", &gender);

    printf("\nOK, your gender is saved.");

    printf("\nPlease enter your age: ");
    scanf("%d", &age);
    printf("OK, your age is saved.");

    printf("\nPlease enter your salary: ");
    scanf("%f", &salary);
    printf("OK, your salary is saved.");

    printf("\n\nAll data saved. Now checking your data...");
    printf("\nAge = %d years\nSalary = ₹%.1f\nGender = %c", age, salary, gender);

    int expected;
    printf("\n\nPlease enter your expected daily salary: ");
    scanf("%d", &expected);

    int weekly = expected * 7;
    int monthly = expected * 30;
    int yearly = expected * 30 * 12;

    printf("\nYour weekly income: %d", weekly);
    printf("\nYour monthly income: %d", monthly);
    printf("\nYour yearly income: %d", yearly);

    printf("\n\nOK, this is your salary estimation.");

    return 0;
}
