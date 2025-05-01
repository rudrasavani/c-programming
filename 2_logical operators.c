/*
logical operators.
___________________________________.
    1) and operator (&&)
    2) or operator (||)
    3) not operator (!)
*/
#include<stdio.h>
void main()
{
    int a = 100;
    int b = 200;
    int c = 300;
    int result;

    //and operator (&&)
    result = a<b && b<c;
    printf("%d = %d<%d && %d<%d",result,a,b,b,c);

    //or operator (||)
    // when both condition are same = 0(false)
    result = a>b || b>c;//100>200 ||200>300 = false(0)
    printf("\n%d = %d<%d || %d<%d",result,a,b,b,c);

    //when both condition are not same = 1(true)
    result = a>b || b<c;//100>200 ||200<300 = true(1)
    printf("\n%d = %d<%d || %d<%d",result,a,b,b,c);

    result = !(a==b);
    printf("\n%d = %d==%d",result,a,b);
}