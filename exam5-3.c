/* 값에 의한 전달과 참조에 의한 전달 차이점 */
#include <stdio.h>

void by_value(int a, int b, int c);
void by_ref(int *a, int *b, int *c);

void main()
{
    int x = 2, y = 4, z = 6;
    printf("Before calling by_value() \t: ");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    by_value(x, y, z);
    printf("After calling by_value() \t: ");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    by_ref(&x, &y, &z);
    printf("After calling by_ref() \t: ");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
}

void by_value(int a, int b, int c)
{
    a = 0;
    b = 0;
    c = 0;
}

void by_ref(int *a, int *b, int *c)
{
    *a = 0;
    *b = 0;
    *c = 0;
}