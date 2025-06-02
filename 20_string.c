#include <stdio.h>

void main() {
    char string[100];  // 100 characters tak input le sakta hai
    int i = 0;

    printf("Enter your name. :- ");
    gets(string);  // User se input lena (Note: gets() is unsafe, but okay for beginner practice)

    // Characters count karna
    while (string[i] != '\0') {
        i++;
    }

    printf("Total characters is :- %d\n",i);
}
