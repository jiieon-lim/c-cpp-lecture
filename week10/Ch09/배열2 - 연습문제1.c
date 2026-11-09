#include <stdio.h>

int main(){
    int arr[100] = {0};
    int arr_count[11] = {0};
    int a, n = 0;

    while(1){
        scanf("%d", &a);

        if(a < 1 || a > 10)
            break;

        arr[n] = a;
        n++;
    }

    for(int i = 0; i < n; i++){
        arr_count[arr[i]]++;
    }

    for(int i = 1; i <= 10; i++){
        if(arr_count[i] == 0)
            continue;

        printf("%d : %d\n", i, arr_count[i]);
    }
}