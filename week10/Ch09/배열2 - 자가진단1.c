#include <stdio.h>

int main(){
    char arr[100] = {0};
    char cnt[26] = {0};
    int n = 0;
    char a;

    while(1){
        scanf(" %c", &a);

        if(a < 'A' || a > 'Z')
            break;

        arr[n] = a;
        n++;
    }

    for(int i = 0; i < n; i++){
        cnt[arr[i] - 'A']++;
    }

    for(int i = 0; i < 26; i++){
        if(cnt[i] == 0)
            continue;

        printf("%c : %d\n", 'A' + i, cnt[i]);
    }
}
