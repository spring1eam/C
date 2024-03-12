/* N개의 정수를 읽어 들여 오름차순으로 정렬하는 프로그램 */
#include <stdio.h>

void main() {
    static int data[100];
    int i, j, N;
    
    printf("입력할 데이터의 개수를 입력 : ");
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &data[i]);
    }

    /* 데이터 전치(XOR)를 통한 오름차순 정렬 */
    for(i = 0; i < N - 1; i++) {
        for(j = i + 1; j < N; j++) {
            if(data[i] > data[j]) {
                data[i] ^= data[j];
                data[j] ^= data[i];
                data[i] ^= data[j];
            }
        }
        
    }

    printf("정렬된 데이터 :\n");
    for(i = 0; i < N; i++) {
        printf("%10d", data[i]);
        if((i+1) % 7 == 0) // 7번째 열 바꿈
            printf("\n");
    }
}