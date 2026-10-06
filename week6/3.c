#include <stdio.h>

int main()
{
    //증가
    for(int i=1; i<=3; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    //감소
    for(int i=6; i>=4; i--){
        for(int j=1; j<=i-3; j++){
            printf("*");
        }
        printf("\n");
    }
}


