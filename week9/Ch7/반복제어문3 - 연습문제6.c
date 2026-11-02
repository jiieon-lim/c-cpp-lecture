#include <stdio.h>

int main(){
    int al=0, num=1;
    for(int i=1; i<5; i++){
        for(int j=1; j<=i; j++){
            printf("%c ", 97+al);
            al++;
        }
        for(int k=1; k<=5-i; k++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}