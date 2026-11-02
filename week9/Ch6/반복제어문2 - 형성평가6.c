#include <stdio.h>

int main(){
    int a, b, n=0, sum=0;
    double avg=0;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a >= b){
        for (int i=b; b<=a; b++){
            if(b % 3 == 0 || b % 5 == 0){
                sum += b;
                n++;
            }
        }
    } else {
        for (int i=a; a<=b; a++){
            if(a % 3 == 0 || a % 5 == 0){
                sum += a;
                n++;
            }
        }
    }
    avg = (double)sum / n;

    printf("sum : %d\n", sum);
    printf("avg : %.1lf", avg);
}