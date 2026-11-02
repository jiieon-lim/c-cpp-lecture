#include <stdio.h>

int main(){
    int num, odd=0, even=0;

    while (1){
        scanf("%d", &num);              // ← 추가

        if (num!=0 && num%2==0){        // ← 수정
            even++;
        }
        else if(num!=0 && num%2==1){    // ← 수정
            odd++;
        }
        else { break; }
    }

    printf("odd : %d\neven : %d", odd, even);
}