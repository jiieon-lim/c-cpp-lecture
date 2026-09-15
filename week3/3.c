//조건연산자
#pragma warning(disable: 4996)
#include <stdio.h>

int main(void)
{
    int num;
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);

    printf("%s", (num % 2 == 0)? "Even" : "Odd");
    //if (num % 2 == 0)? printf("Even\n") : printf("old\n");

    return 0;
}