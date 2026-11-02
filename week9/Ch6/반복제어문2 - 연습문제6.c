#include <stdio.h>

int main(){
    int a, sum=0;
    double avg=0;

    for(int i=0; i<5; i++){
        scanf("%d", &a);
        sum += a;
    }
    avg = (double)sum /5;

    printf("sum : %d\n", sum);
    printf("avg : %.1lf", avg);
}