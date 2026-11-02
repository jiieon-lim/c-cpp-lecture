#include <stdio.h>

int main(){
    int n, count=0;
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        for (int j=0; j<=n-i; j++){
            printf("%c", 65+count);
            count++;
        }
        printf("\n");
    }
}