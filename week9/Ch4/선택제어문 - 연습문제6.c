#include <stdio.h>

int main() {
    int num[3];
    for (int i = 0; i < 3; i++){
        scanf("%d", &num[i]);
    }

    int max = num[0];
    for (int i = 1; i <= 3; i++){
        if (num[i] > max){
            max = num[i];
        }
    }
    printf("max = %d", max);
}