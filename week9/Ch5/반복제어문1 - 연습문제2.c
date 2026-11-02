#include <stdio.h>

int main(){
    int sum=0, num=1;

    while (num <= 10){
        sum += num;
        num++;
    }
    printf("sum = %d\n", sum);
    printf("num = %d", num);
}