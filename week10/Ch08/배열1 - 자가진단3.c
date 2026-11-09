#include <stdio.h>

int main(){
    int arr[100];
    int n;
    int c = 0;
    
    for (int i=0; i<100; i++){
        scanf("%d", &n);

        if (n==0){
            break;
        }
        arr[i] = n;
        c += 1;
    }

    for (int i=c-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
}