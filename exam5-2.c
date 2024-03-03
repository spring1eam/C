/* factorial 계산기 */
#include <stdio.h>
#pragma warning(disable:4996)

unsigned int f, x;
unsigned int factorial(unsigned int a);

void main()
{
    printf("Enter an integer value between 1 and 8 : ");
    scanf("%d", &x);
    if(x > 8 || x < 1)
        printf("Only values from 1 to 8 are acceptable!");
    else
    {
        f = factorial(x);
        printf("%u factorial equals %u\n", x, f);
    }
}

unsigned int factorial(unsigned int a)
{
    if(a == 1)
        return 1;
    else
    {
        a *= factorial(a - 1);
        return a;
    }
}