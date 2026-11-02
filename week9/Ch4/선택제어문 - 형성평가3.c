#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num % 400 == 0){
        printf("leap year");
    } else if (num % 4 == 0 && num % 100 != 0) {
        printf("leap year");
    } else {
        printf("common year");
    }
}