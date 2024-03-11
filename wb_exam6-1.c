/* 학생들의 성적을 입력받아 총점과 평균을 구하고, 성적순으로 출력하는 프로그램 */
#include <stdio.h>
#define N 10

void input(int scr[], int);
int sum2(int scr[], int);
void sort(int scr[], int);

void main() {
    int score[N] = {0};
    int i, sum;
    float average;

    input(score, N);
    sum = sum2(score, N);
    average = (float) sum / N;
    printf("총점 : %d\n", sum);
    printf("평균 : %f\n", average);

    sort(score, N);
    printf("성적순 : ");
    for(i = 0; i < N; i++)
        printf("%d ", score[i]);
    printf("\n");
}

void input(int scr[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("%d번째 성적을 입력하세요 : ", i + 1);
        scanf("%d", &scr[i]);
    }
}

int sum2(int scr[], int size) {
    int sum, i;
    for(sum = 0, i = 0; i < size; i++)
        sum += scr[i];
    return sum;
}

void sort(int scr[], int size) {
    int i, j, temp;
    for(i = 0; i < size - 1; i++) { // 첫번째 숫자 정하고 > 두번째 정하고 > 마지막 앞에 수까지 진행
        for(j = size - 1; j > i; j--) { // 배열의 맨뒤가 i 보다 클 때 까지 반복 > 검증해야하는 맨뒤는 하나씩 준다
            if(scr[j - 1] > scr[j]) {   // 앞의 수가 뒤의 수보다 크면 바꿔라.
                temp = scr[j - 1];
                scr[j - 1] = scr[j];
                scr[j] = temp;
            }
        }
    }

}


