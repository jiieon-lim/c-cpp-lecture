#include <stdio.h>

int main(){
    int num;

    while(1){
        scanf("%d", &num);
        if (num >= 0 && num <= 100){
            printf((num >= 80) ? "Pass\n" : "Fail\n");
        } else {
            break;
        }
    }
}