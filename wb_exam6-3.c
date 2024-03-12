/* 5x5 정방행렬의 전치행렬을 구하는 프로그램 */
#include <stdio.h>

void main() {
    int i, j, dim[5][5] = {
        {4, 5, 7, 8, 9},
        {5, 2, 4, 6, 2},
        {4, 7, 8, 5, 2},
        {3, 5, 8, 9, 6},
        {7, 5, 6, 9, 8}
    };
    const int max_count = sizeof(dim) / sizeof(dim[0]);

    printf("원 행렬\n");
    for(i = 0; i < max_count; i ++) {
        for(j = 0; j < max_count; j++)
            printf("%3d", dim[i][j]);
        printf("\n");
    }

    /* 행렬 전치 */
    for(i = 0; i < max_count; i++) {
        for(j = 0; j < i; j++) {
            dim[i][j] ^= dim[j][i];
            dim[j][i] ^= dim[i][j];
            dim[i][j] ^= dim[j][i];
        }
    }

    printf("전치 행렬\n");
    for(i = 0; i < max_count; i ++) {
        for(j = 0; j < max_count; j++)
            printf("%3d", dim[i][j]);
        printf("\n");
    }
}