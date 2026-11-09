#include <stdio.h>

int main(){
    int arr[100] = {0};
    int cnt[11] = {0};
    int a, n = 0;

    while(1){
        scanf("%d", &a);

        if(a == 0)
            break;

        arr[n] = a;
        n++;
    }

    for(int i = 0; i < n; i++){
        cnt[(arr[i] / 10) % 10]++;
    }

    for(int i = 0; i <= 10; i++){
        if(cnt[i] == 0)
            continue;

        printf("%d : %d\n", i, cnt[i]);
    }
}