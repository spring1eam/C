/* 3차원 배열이 매개변수로 사용된 함수 예 */
#include <stdio.h>
void score_average(int gr[][2][3], int, int, int);
void main() {
    int score[4][2][3] = {
        {{10, 20, 30},
        {10, 10, 10}},
        {{0, 40, 50},
        {10, 10, 10}},
        {{30, 30, 30},
        {50, 50, 50}},
        {{20, 20, 20},
        {0, 0, 0}}};
    score_average(score, 4, 2, 3);
}
void score_average(int gr[][2][3], int size, int row, int column) {
    int class_sum = 0, subject_sum = 0;
    int class_average = 0, subject_average = 0;
    int i, j, k;
    for(i = 0; i < size; i++) { // i + 1 클라스
        class_sum =0;   // i + 1 클라스 합계 초기화
        for(j = 0; j < row; j++) {  // j + 1 학생
            subject_sum = 0;    // j + 1 학생 합계 초기화
            for(k = 0; k < column; k++) {   // k과목의 점수
                subject_sum += gr[i][j][k]; // j + 1 학생 과목 점수 합계
            }
            subject_average = subject_sum / column; // j + 1 학생 과목 평균
            printf("student%d subject_average = %d \n", j + 1, subject_average);    // j + 1 학생 과목 평균 도출
            class_sum += subject_average;   // i + 1 클래스 합계
        }
        class_average = class_sum / size;
        printf("class%d class_average = %d \n\n", i + 1, class_average);
    }
}