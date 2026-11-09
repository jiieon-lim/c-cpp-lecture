#include <stdio.h>

int main() {
    int arr[5][4];
    int sum;
    float avg;

    for (int i = 0; i < 5; i++) {
        sum = 0;

        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }

        avg = (float)sum / 4;
        printf("%d %.1f\n", sum, avg);
    }
}