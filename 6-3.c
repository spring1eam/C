/* 2차원 배열의 사용 */
#include <stdio.h>
void main() {
    static int score[4][3] = {{90, 90, 90}, {80, 80, 80}, {70, 70, 70}, {60, 60, 60}};  // static(기억클래스; 정적변수) 프로그램이 끝날 때까지 계속 유지 - 함수가 종료되거나 블록을 벗어나도 값이 유지
    int sum, i, j;
    printf("번호\t국어\t수학\t영어\t합계 \n");
    for(i = 0; i < 4; ++i) {
        sum = 0;
        printf("%3d", i + 1);///
        for(j = 0; j < 3; j++) {
            printf("\t%3d", score[i][j]);
            sum += score[i][j];
        }
        printf("\t%3d \n", sum);
    }
}