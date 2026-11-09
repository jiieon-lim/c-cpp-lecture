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
    printf("%d\n", n);

    for(int i=0; i<n; i++){
        if (arr[i] % 2 == 1)
            printf("%d ", arr[i] * 2);
        else 
            printf("%d ", arr[i] / 2);
    }
}