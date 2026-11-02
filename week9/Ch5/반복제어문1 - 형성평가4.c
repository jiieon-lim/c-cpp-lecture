#include <stdio.h>

int main() {
    int list[1000];
    int num=0, cnt=0;

    while(1){
        scanf("%d", &num);

        if (num == 0){
            break;
        }

        if (num % 3 == 0 || num % 5 == 0){
            continue;
        } else {
            cnt++;
        }
    }

    printf("%d\n", cnt);
}