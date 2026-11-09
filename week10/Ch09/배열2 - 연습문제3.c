#include <stdio.h>

int main(){
    int arr[20];
    int n1 = 0, n2 = 0;

    arr[0] = 1;
    arr[1] = 1;

    for (int i=0; i<18; i++){
        n1 = arr[i];
        n2 = arr[i + 1];
        arr[i + 2] = n1 + n2;
    }

    for (int i=0; i<20; i++){
        printf("%d ", arr[i]);
    }
}