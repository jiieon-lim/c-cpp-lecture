#include <stdio.h>

int main(){
    int arr[10];
    int a, sum=0;
    float avg = 0;

    for(int i=0; i<10; i++){
        scanf("%d", &a);
        arr[i] = a;
        if (i % 2 != 0)
            sum += arr[i];
        else
            avg += arr[i];  
    }
    avg /= 5;

    printf("sum : %d\n", sum);
    printf("avg : %.1f", avg);

}