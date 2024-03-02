/* 1부터 100까지 홀수의 합을 구하는 프로그램 2 */
#include <stdio.h>
void main()
{
    int i, sum = 0;
    for(i = 1; i <= 100; i += 2)
        sum += i;
    printf("sum = %d \n", sum);
}