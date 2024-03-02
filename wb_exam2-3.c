/* 자료형의 범위를 알아보는 프로그램(10만부터 11만까지의 정수의 합) */
#include <stdio.h>

void main()
{
    long i, sum1=0;
    float sum2=0;
    double sum3=0;

    for(i=100000; i<=110000; i++)
    {
        sum1+=i;
        sum2+=i;
        sum3+=i;
    }
    printf("100,000~110,000 의 합(long)=%d\n", sum1);
    printf("100,000~110,000 의 합(float)=%f\n", sum2);
    printf("100,000~110,000 의 합(double)=%f\n", sum3);
}