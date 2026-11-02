#include <stdio.h>

int main() {
    int num=0, cnt=0, min=100, max=0;

    while(1){
        scanf("%d", &num);
        if(num == -1){
            break;
        }
        if(num % 3 == 0){
            num /= 3;
            printf("%d\n", num);
        }
        
    }
}