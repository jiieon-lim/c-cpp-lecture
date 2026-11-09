#include <stdio.h>

int main(){
    int arr[5];
    int a;

    for (int i=0; i < 5; i++){
        scanf("%d", &a);
        arr[i] = a;
        printf("%d ", a);
    }
}