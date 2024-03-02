/* 단위를 변환하는 프로그램(mile을 kilometer로) */
#include <stdio.h>
#define KILO 1.609
void main()
{
    float miles, kms;
    printf("\t input(miles) ==>");
    scanf("%f", &miles);
    kms=KILO*miles; // 1mile = 1.609 km
    printf("\t %f mile=%f km \n", miles, kms);
}