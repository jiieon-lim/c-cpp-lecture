#include <stdio.h>

int main(){
    int arr[100];
    int n, a, max=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        arr[i] = a;
    }

    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("%d", max);

}