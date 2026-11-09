#include <stdio.h>

int main(){
    int arr[10];
    int a = 1;

    for (int i=0; i < 10; i++){
        arr[i] = a;
        a += 1;
        printf("%d ", arr[i]);
    }
}