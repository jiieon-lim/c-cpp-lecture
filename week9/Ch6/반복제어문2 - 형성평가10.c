#include <stdio.h>

int main(){
    int a, b, result;
    scanf("%d", &a);
    scanf("%d", &b);

    for (int j=1; j<=9; j++){
        if (a <= b){
            for (int i=a; i<=b; i++){
                result = i * j;
                printf("%d * %d = %2d   ", i, j, result);
            }
        } else {
            for (int i=a; i>=b; i--){
                result = i * j;
                printf("%d * %d = %2d   ", i, j, result);
            }
        }
        printf("\n");
    }
}