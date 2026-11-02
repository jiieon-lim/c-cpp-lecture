#include <stdio.h>

int main(){
    int num1, num2, i;
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 <= num2){
        for (i=num1; i<=num2; i++){
            printf("%d ", i);
        }
    } else {
        for (i=num2; i<=num1; i++){
            printf("%d ", i);
        }
    }
}