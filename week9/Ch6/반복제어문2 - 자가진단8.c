#include <stdio.h>

int main(){
    int result;
    for (int i=2; i<=4; i++){
        for (int j=1; j<=5; j++){
            result = i * j;
            printf("%d * %d =", i, j);
            if (result < 10){
                printf("  %d   ", result);
            } else {
                printf(" %d   ", result);
            }
        }
        printf("\n");
    }
    
}