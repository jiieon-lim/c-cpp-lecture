#include <stdio.h>

int main(){
    int num, n, sum=0;
    float avg = 0;
        scanf("%d", &n);

    for (int i=0; i<n; i++){
        scanf("%d", &num);
        sum += num;
    }

    avg = (float)sum / n;

    printf("%.2f", avg);
}