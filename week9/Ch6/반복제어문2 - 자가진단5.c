#include <stdio.h>

int main(){
    int a, num3=0, num5=0;

    for(int i=0; i<10; i++){
        scanf("%d", &a);
        if (a % 3 == 0){
            num3++;
        }
        if (a % 5 == 0){
            num5++;
        }
    }

    printf("Multiples of 3 : %d\n", num3);
    printf("Multiples of 5 : %d", num5);
}