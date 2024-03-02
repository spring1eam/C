/* 1부터 100까지 홀수의 합을 구하는 프로그램 1 */
#include <stdio.h>
void main()
{
    int i, sum = 0;
    for (i = 0; i <= 100; i++)
    {
        if (i % 2)
        {
            sum += i;
        }
    }
    printf("1 ~ 100까지의 홀수의 합: %d \n", sum);
}