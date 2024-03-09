/* 문자열을 저장한 배열의 사용 예 */
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
void main() {
    char str_in[50], str_out[50];
    int i = 0;
    printf("문자열을 입력하시오. : ");
    scanf("%s", str_in);
    do {
        str_out[i] = '*';    // str_in 배열의 문자를 *로 바꾸어 str_out 배열에 저장
        i++;
    } while(str_in[i] != 0);
    str_out[i] = '\0';  // 문자열 끝을 나타내기 위해 null 문자 저장
    printf("입력 문자열 배열 str_in = %s \n", str_in);
    printf("출력 문자열 배열 str_out = %s \n", str_out);
    printf("크기: %d\n문자열길이: %d\n", sizeof(str_in), strlen(str_in));
}