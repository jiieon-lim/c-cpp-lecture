#include <stdio.h>

int main() {
    int num;

    while(1){
        printf("1. Korea\n2. USA\n3. Japan\n4. China\nnumber?\n");
        scanf("%d\n\n", &num);

        switch(num){
            case 1: printf("Seoul\n\n"); break;
            case 2: printf("Washington\n\n"); break;
            case 3: printf("Tokyo\n\n"); break;
            case 4: printf("Beijing\n\n"); break;
            default: printf("none\n\n"); return 0;
        }
    }
}