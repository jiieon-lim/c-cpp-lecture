#include <stdio.h>

int main(){
    int num;
    printf("Input value : ");
    scanf("%d", &num);
    printf("%d", num);

    if (num>0){
        printf("\nPositive number");
    }
}