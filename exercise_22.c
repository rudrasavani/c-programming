#include<stdio.h>
void rudra(int start,int count)
{
    printf("\n%2d X %2d = %2d  |",start,count,start * count);  
}
void main()
{
    int start,end;

    printf("Enter your starting number. :- ");
    scanf("%d",&start);

    printf("\nEnter your ending number. :- ");
    scanf("%d",&end);

    for(start = start;start<=end;start++)
    {
        for(int count=1;count<=10;count++)
        {
            rudra(start,count);
        }
        printf("\n______________.");
    }

}