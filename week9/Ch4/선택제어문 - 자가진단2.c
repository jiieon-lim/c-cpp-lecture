#include <stdio.h>

int main(){
    int height;
    int weight;

    scanf("%d", &height);
    scanf("%d", &weight);

    int result = weight + 100 - height;
    printf("%d", result);
    if (result > 0) {
        printf("\nObesity\nNeed control");
    }
}