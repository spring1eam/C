/* 양의 정수 5개의 합을 구하는 프로그램 */
#include <stdio.h>
#pragma warning(disable:4996)
void main() // main() 함수
{
    int sum = 0, num = 0, i = 0;    // 초기화
    while(i < 5)    // 5번 반복
    {
        while(num <= 0) // num이 양수가 아니면 반복(num을 0으로 초기화 하기 때문에 계속 양수는 아님. 그런데 왜 음수도 포함시켰을까?)
        {
            printf("양의 정수를 입력(%d번째) : ", i + 1);   // 반복횟수를 출력
            scanf("%d", &num);  // 변수 num에 값을 입력받음
        }
        sum += num; // 입력값 num을 sum으로 누적합
        num = 0;    // num 초기화
        i++; // i 증감식
    }
    printf("총합: %d \n", sum); // 합계 sum을 출력
}