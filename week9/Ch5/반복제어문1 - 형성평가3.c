#include <stdio.h>

int main() {
    int list[1000];
    int num=0, cnt=0, sum=0;
    double avg=0;

    while(1){
        scanf("%d", &num);

        if (num >= 0 && num <= 100){
            list[cnt] = num;
            sum += num;
            cnt++;
        } else {
            break;
        }
    }

    avg = (double)sum / cnt;
    printf("sum : %d\n",sum);
    printf("avg : %.1lf", avg);
}