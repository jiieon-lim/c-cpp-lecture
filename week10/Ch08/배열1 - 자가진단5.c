#include <stdio.h>

int main(){
    int arr[10];
    int a, min=1000;

    for(int i=0; i<10; i++){
        scanf("%d", &a);
        arr[i] = a;
    }

    for(int i=0; i<10; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("%d", min);

}