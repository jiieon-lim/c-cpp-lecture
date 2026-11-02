#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    char ch = 'A';
    int num = 0;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (j <= n-i+1){
                printf("%c ", ch);
                ch++;
            } else {
                printf("%d ", num);
                num++;
            }
        }
        printf("\n");
    }
}