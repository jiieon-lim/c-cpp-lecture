#include <stdio.h>

int main() {
    int num;

    while(1){
        printf("1. Input\n2. Output\n3. Delete\n4. Finish\nEnter number:\n");
        scanf("%d", &num);

        switch(num){
            case 1: printf("You selected Input.\n\n"); break;
            case 2: printf("You selected Output.\n\n"); break;
            case 3: printf("You selected Delete.\n\n"); break;
            case 4: printf("You selected Finish.\n\n"); return 0;
            default: printf("Wrong input.\n\n"); break;
        }
    }
}