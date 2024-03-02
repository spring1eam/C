/* 다섯 개의 정수값을 입력받아 총합을 구하는 프로그램 */
#include <stdio.h>
void main()
{
    int i;  // 횟수 카운트를 하기 위한 변수 선언
    int tmp;    // 정수값을 읽을 임시 변수 선언
    int total = 0;  // 읽은 정수값을 합산하기 위한 변수 선언 및 초기화
    for(i = 1; i <= 5; i++)
    {
        printf("%d번째 정숫값을 입력한 후 Enter키를 누르세요: ", i);
        scanf("%d", &tmp);
        total += tmp;
    }
    printf("읽은 정수의 총합은 %d입니다. \n", total);
}