#include <stdio.h>

int main() {
    int num=0, cnt=0, small=0, large=0;

    while(1){
        scanf("%d", &num);
        if(num < 100){
            if (num >= 50){
                large++;
            } else {
                small++;
            }
            
        } else {
                large++;
                break;
        }
        
    }

    printf("small : %d\n",small);
    printf("large : %d\n",large);
}