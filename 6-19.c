/* 포인터와 배열의 호환성 예 2 */
#include <stdio.h>
/* 배열 전체를 함수의 매개변수로 줄 때, 함수의 매개변수는 배열과 포인터 형태의 두 가지가 동일하게 사용될 수 있음 */
int score_sum1(int gr[], int);
int score_sum2(int *gr, int);
void main() {
    int score[5] = {10, 20, 30, 40, 50};
    int sum1, sum2;
    sum1 = score_sum1(score, 5);
    sum2 = score_sum2(score, 5);
    printf("sum1 = %d \n", sum1);
    printf("sum2 = %d \n", sum2);
}
int score_sum1(int gr[], int size) {
    int sum1 = 0;
    int i;
    for(i = 0; i < size; i++)
        sum1 += gr[i];
    return sum1;
}
int score_sum2(int *gr, int size) {
    int sum2 = 0;
    int i;
    for(i = 0; i < size; i++)
        sum2 += gr[i];
    return sum2;
}
