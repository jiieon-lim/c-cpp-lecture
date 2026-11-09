#include <stdio.h>

int main(){
    float arr[] = {85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int n1, n2;
    float sum;

    scanf("%d", &n1);
    scanf("%d", &n2);

    sum = (float)arr[n1-1] + arr[n2-1];

    printf("%.1f", sum);
}