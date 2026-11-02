#include <stdio.h>

int main() {
    int a, h;
    double s;
    char i;

    while(1){
        scanf("%d", &a);
        scanf("%d", &h);
        s = (double)a * (double)h * 0.5;
        printf("Triangle width = %.1lf\n", s);

        printf("Continue? ");
        scanf(" %c", &i);
        if (i != 'Y' && i != 'y'){
            break;
        }
    }
}