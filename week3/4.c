
//3~6번 숫자 출력하기
//        4 7 2
//      X 3 8 5
//   ------------------
//        2 3 6 0      ← 3번
//      3 7 7 6        ← 4번
//    1 4 1 6          ← 5번
//   ------------------
//    1 8 1 7 2 0      ← 6번

#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
    int a, b, temp;
    scanf("%d", &a);
    scanf("%d", &b);

    temp = b;
    while (temp > 0)
    {
        printf("%d\n", a * (temp % 10));
        temp /= 10;
    }
    printf("%d", a * b);

    return 0;
}