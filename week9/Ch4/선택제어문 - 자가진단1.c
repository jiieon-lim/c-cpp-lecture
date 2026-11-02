#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    printf("%d", num);

    if (num < 0){
        printf("\nminus");
    }
}