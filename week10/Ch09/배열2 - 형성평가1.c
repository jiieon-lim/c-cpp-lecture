#include <stdio.h>

int main() {
    int arr[10];
    int arr_count[7] = {0};

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        arr_count[arr[i]]++;
    }

    for (int i = 1; i <= 6; i++) {
        printf("%d : %d\n", i, arr_count[i]);
    }
}