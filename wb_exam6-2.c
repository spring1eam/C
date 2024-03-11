/* 3x3행렬 2개를 읽어 들여 합을 출력하는 프로그램 */
#include <stdio.h>

void main() {
    int A[3][3], B[3][3], C[3][3];
    int i, j;

    printf("*** Input the first matrix A (3x3) *** \n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);  // 2차원 배열 A의 각 요소에 값을 입력
    
    printf("## A ## \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }       
    printf("\n");
    
    printf("*** Input the second matrix B (3x3) *** \n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);  // 2차원 배열 B의 각 요소에 값을 입력
    
    printf("## B ## \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("*** C = A + B *** \n\n");
    printf("## C ## \n");
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}