#include <stdio.h>

int main() {
    int list[3];

    for (int i = 0; i < 3; i++){
        scanf("%d", &list[i]);
    }

    int min = list[0];
    for (int i = 1; i < 3; i++){
        min = (min > list[i]) ? list[i] : min;
    }
    printf("%d", min);
}