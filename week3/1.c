//LAP_5-1
//평년, 윤년 구분하기

#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
    int year;
    printf("연도를 입력하세요 : ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0) {
    printf("윤년입니다.");
    }
    else if (year % 400 == 0) {
        printf("윤년입니다.");
    }
    else {
        printf("평년입니다.");
    }

    return 0;
}