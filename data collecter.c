
#include<stdio.h>
void main()
{
    
    int age;
    float weight;
    char gender;
    printf("Enter your gender (m = male,f=female)");
    scanf("%c",&gender);
    printf("Enter your weight");
    scanf("%f",&weight);
    printf("Enter your age");
    scanf("%d",&age);
    
    printf("age = %d weight =%.2f gender = %c",age,weight,gender);
}




