/* 1부터 100까지의 합을 구하는 프로그램 */
#include <stdio.h>
void main()
{
    int i;
    int sum = 0;
    for (i = 1; i <= 100; i++)
    {
        sum += i;
    }
    printf("1부터 100까지의 합: %d", sum);
}