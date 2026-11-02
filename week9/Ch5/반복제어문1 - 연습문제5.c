#include <stdio.h>

int main() {
    int num=0, cnt=0, min=100, max=0;

    while(1){
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        if(num > 0 && num < 100){
            if (num > max){
                max = num;
            } 
            if (num < min){
                min = num;
            } 

        }
        
    }
    printf("MAX = %d\n",max);
    printf("MIN = %d\n",min);
}