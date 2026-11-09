#include <stdio.h>

int main(){
    int arr[100];
    int n;
    
    for (int i=0; i<100; i++){
        scanf("%d", &n);

        if (n==0){
            break;
        }

        arr[i] = n;

        if (i % 2 != 0){
            printf("%d ", arr[i]);
        }
    }

}