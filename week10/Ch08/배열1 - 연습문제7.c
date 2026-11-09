#include <stdio.h>

int main(){
    int arr[10];
    int a, sum=0;
    float avg = 0;

    for(int i=0; i<10; i++){
        scanf("%d", &a);
        arr[i] = a;
        sum += arr[i];
    }

    avg = sum / 10;
    printf("sum = %d\n", sum);
    printf("avg = %.1f", avg);

}