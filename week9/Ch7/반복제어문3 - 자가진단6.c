#include <stdio.h>

int main(){
    int n, al=0, num=1;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            printf("%d ", num);
            num++;
        }
        for(int k=1; k<=i; k++){
            printf("%c ", 65+al);
            al++;
        }
        printf("\n");
    }
}