#include <stdio.h>

void main() {
    int number,answer, count = 0;
    
    printf("Enter your number. :- ");
    scanf("%d", &number);

    if (number <= 1)
    {
        printf("this number is not composite number.\n");
    }
    else
    {
        for (answer = 1; answer <= number; answer++)
        {
        if (number % answer == 0)
        {
           count = count + 1;
        }
        }
        if (count > 2)
        {
            printf("This number is composite number.\n");
        } 
        else
        {
            printf("This number is not composite number.\n");
        }
    }
}
