#include <stdio.h>

int main(){
    int arr[10];
    int a, min, max;

    for(int i=0; i<10; i++){
        scanf("%d", &a);
        arr[i] = a;
    }

    min = arr[0];
    max = arr[0];

    for(int i=0; i<10; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }

    }
    printf("%d %d", max, min);

}