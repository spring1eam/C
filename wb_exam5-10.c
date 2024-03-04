/* 피보나치 수열을 출력하는 프로그램 */
#include <stdio.h>

unsigned fibonacci(void);

void main()
{
    int k;
    printf(" k | fibonacci \n");
    printf("**************\n");
    for(k = 1; k <= 20; k++)
        printf("%2d | %9u\n", k, fibonacci());
}

unsigned fibonacci(void)
{
    static unsigned f = 0, pre_f = 1;   // 정적변수로 함수를 변환해도 이전 피보나치 같이 저장되어 있음
    unsigned re;
    re = f; 
    f += pre_f;
    pre_f = re;
    return re;
}