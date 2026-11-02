#include <stdio.h>

int main(){
    int sum=0, num=0, i=0;
    scanf("%d", &num);

    while (i <= num){
        sum += i;
        i++;
    }
    printf("%d", sum);
}