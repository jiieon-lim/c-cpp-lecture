#include <stdio.h>

int main(){
    float arr[6], a, sum=0, avg = 0;

    for(int i=0; i<6; i++){
        scanf("%f", &a);
        arr[i] = a;
        sum += arr[i];
    }
    avg = sum / 6;

    printf("%.1f", avg);
}