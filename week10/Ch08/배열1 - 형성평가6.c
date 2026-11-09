#include <stdio.h>

int main(){
    int arr[100];
    int a, n=0, count=0, sum=0;
    float avg=0;

    while(1){
        scanf("%d", &a);

        if (a==0)
            break;

        arr[n] = a;
        n += 1;
    }

    for(int i=0; i<n; i++){
        if (arr[i] % 5 == 0){
            sum += arr[i];
            count += 1;
        }
    }
    avg = (float)sum / count;

    printf("Multiples of 5 : %d\n", count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);
}