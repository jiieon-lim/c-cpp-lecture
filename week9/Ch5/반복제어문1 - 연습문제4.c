#include <stdio.h>

int main() {
    int list[1000];
    int num=0, cnt=0, sum=0;
    float avg=0;

    while(1){
        scanf("%d", &num);

        if (num != 0){
            list[cnt] = num;
            sum += num;
            cnt++;
        } else {break;}
    }

    avg = (float)sum / cnt;

    printf("cnt = %d\n",cnt);
    printf("sum = %d\n",sum);
    printf("avg = %.2f",avg);
}