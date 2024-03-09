/* char형 배열의 사용 예 */
#include <stdio.h>
void main() {
    char name[] = "HONG GIL DONG";
    char adrs1[6] = {'S', 'E', 'O', 'U', 'L', '\0'};    // 마지막 요소를 \0로 함
    char adrs2[6] = {'S', 'E', 'O', 'U', 'L'};  // 마지막 요소를 \0로 하지 않음
    printf("name : %s \n", name);
    printf("adrs1 : %s \n", adrs1);
    printf("adre2 : %s \n", adrs2); // SEOUL 다음에 trash가 붙을 수 있음
    printf("name : %x \n", name);
    printf("adrs1 : %x \n", adrs1);
    printf("adre2 : %x \n", adrs2); // SEOUL 다음에 trash가 붙을 수 있음
}