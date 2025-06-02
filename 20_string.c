#include <stdio.h>

void main() {
    char string[100];  
    int i = 0;

    printf("Enter your name. :- ");
    gets(string);  

    // Characters count karna
    while (string[i] != '\0') {
        i++;
    }

    printf("Total characters is :- %d\n",i);
}
