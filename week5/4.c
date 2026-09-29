#include <stdio.h>

int num;
int A, B, C;
int cnt[10] = {0};

int main(){
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    num = A * B * C;

    while (num > 0){
        cnt[num % 10]++;
        num = num / 10;
    }

    for (int i = 0; i < 10; i++){
        printf("%d\n", cnt[i]);
    }

    return 0;
}