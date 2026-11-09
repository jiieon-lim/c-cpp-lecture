#include <stdio.h>

int main(){
    int arr[100];
    int a, n=0, min, max;

    while(1){
        scanf("%d", &a);

        if (a==0)
            break;

        arr[n] = a;
        n += 1;
    }

    min = arr[0];
    max = arr[0];

    for(int i=0; i<n; i++){
        if(max < arr[i])
            max = arr[i];
            
        if(min > arr[i])
            min = arr[i];
    }
    printf("%d", max + min);
}