#include <stdio.h>

int main(){
    int arr[10];
    int a, sumOdd=0, sumEven=0;

    for(int i=0; i<10; i++){
        scanf("%d", &a);
        arr[i] = a;
        if (i % 2 == 0)
            sumOdd += arr[i];
        else
            sumEven += arr[i];
    }

    printf("odd : %d\n", sumOdd);
    printf("even : %d", sumEven);

}