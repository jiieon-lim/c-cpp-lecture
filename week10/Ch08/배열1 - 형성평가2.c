#include <stdio.h>

int main() {
    int n, sum=0, arr[5];

    for (int i=0; i<5; i++){
        scanf(" %d", &n);
        arr[i] = n;
        if (i % 2 == 0)
            sum += arr[i];
    }
    printf("%d", sum);
}