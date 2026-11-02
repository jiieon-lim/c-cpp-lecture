#include <stdio.h>

int main(){
    int a, num=0;

    for(int i=0; i<10; i++){
        scanf("%d", &a);
        if (a % 2 == 0){
            num++;
        }
    }

    printf("Even numbers = %d", num);
}