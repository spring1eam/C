/* 난수를 구하는 프로그램 */
#include <stdio.h>
#include <stdlib.h> //난수 관련 함수의 원형을 갖고 있는 헤더 파일

void main()
{
    int i, a;
    printf("input number: ");
    scanf("%d", &a);
    srand(a);   //srand(): 난수 발생 함수의 난수 발생 시작 값 seed를 설정하는 함수
    for(i = 1; i <= 5; i++)
        printf("%d \n", rand());
}