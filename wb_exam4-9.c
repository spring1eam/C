/* 주어진 문자열에서 특정문자의 개수를 구하는 프로그램 */
#include <stdio.h>
void main()
{
    static char a[31] = "KOREA NATIONAL OPEN UNIVERSITY";
    int i, c;
    char txt;
    c = 0;
    printf("찾고자하는 문자 하나를 입력하세요: ");
    scanf("%c", &txt);
    for(i = 0; i <= 29; i++)
        if(a[i] == txt)
            c++;
    printf("%c의 개수 = %d\n", txt, c);
}