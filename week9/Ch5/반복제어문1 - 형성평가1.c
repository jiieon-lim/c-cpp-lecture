#include <stdio.h>
#include <stdarg.h>

int main(){
    int a = 1;
    int num;
    scanf("%d", &num);

    while (a<=num){
        printf("%d ", a);
        a++;
    }
    return 0;
}