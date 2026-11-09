#include <stdio.h>

int main(){
    int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n1, n2, n3;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    printf("%d\n", arr[n1-1]);
    printf("%d\n", arr[n2-1]);
    printf("%d", arr[n3-1]);
}