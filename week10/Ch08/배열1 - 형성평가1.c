#include <stdio.h>

int main() {
    char moon, arr[10];

    for (int i=0; i<10; i++){
        scanf(" %c", &moon);
        arr[i] = moon;
    }
    for (int i=9; i>=0; i--){
        printf("%c ", arr[i]);
    }
}