#include <stdio.h>

int main(){
    int num, n, even=0, odd=0, sum=0;

    for (int i=0; i<10; i++){
        scanf("%d", &num);
        if (num % 2 == 0){
            even += 1;
        } else {
            odd += 1;
        }
    }

    printf("even : %d\n", even);
    printf("odd : %d", odd);
}