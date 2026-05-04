
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
'a' ~ 'z' 영문자 1개가 주어진다.
주어진 영문자까지의 알파벳을 순서대로 출력하라.
*/
int main() {
    // 파일 입출력 설정
    freopen("q4in.txt", "r", stdin);
    freopen("q4out.txt", "w", stdout);

    // 박선영 4번 문제

    char c;
    scanf("%c", &c);

    for (char i = 'a'; i <= c; i++)
    {
        printf("%c", i);
    }

    return 0;
}