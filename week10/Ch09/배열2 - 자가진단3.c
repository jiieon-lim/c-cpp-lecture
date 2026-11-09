#include <stdio.h>

int main(){
    int arr[100];
    int i=0, num, count=0;
    scanf("%d", &num);

    arr[0] = 100;
    arr[1] = num;

    while (1){
        arr[i+2] = arr[i] - arr[i+1];
        if (arr[i+2]<0)
            break;
        count++;
        i++;
    }

    for (int i=0; i<count+3; i++){
        printf("%d ", arr[i]);
    }
}