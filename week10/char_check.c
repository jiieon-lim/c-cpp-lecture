#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch = 'M';   // 이 예제에서 검사할 문자

    printf("문자: %c\n", ch);   // 검사할 문자 출력

    printf("알파벳 여부: %s\n", isalpha(ch) ? "예" : "아니오");  // isalpha(ch) : 알파벳인지 검사

    printf("대문자 여부: %s\n", isupper(ch) ? "예" : "아니오");  // isupper(ch) : 대문자인지 검사

    printf("소문자 여부: %s\n", islower(ch) ? "예" : "아니오");  // islower(ch) : 소문자인지 검사

    printf("숫자 여부: %s\n", isdigit(ch) ? "예" : "아니오");    // isdigit(ch) : 숫자인지 검사

    printf("알파벳 또는 숫자 여부: %s\n", isalnum(ch) ? "예" : "아니오");  // isalnum(ch) : 알파벳 또는 숫자인지 검사

    printf("16진수 숫자 여부: %s\n", isxdigit(ch) ? "예" : "아니오");     // isxdigit(ch) : 16진수에 사용할 수 있는 문자인지 검사

    printf("구두점 문자 여부: %s\n", ispunct(ch) ? "예" : "아니오");      // ispunct(ch) : 구두점 문자인지 검사

    printf("인쇄 가능 문자 여부: %s\n", isprint(ch) ? "예" : "아니오");   // isprint(ch) : 화면에 출력 가능한 문자인지 검사

    printf("제어 문자 여부: %s\n", iscntrl(ch) ? "예" : "아니오");        // iscntrl(ch) : 제어 문자인지 검사

    printf("아스키 문자 여부: %s\n", isascii(ch) ? "예" : "아니오");      // isascii(ch) : 아스키 문자인지 검사

    return 0;
}