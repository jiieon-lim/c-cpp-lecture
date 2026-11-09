#include <stdio.h>

int main(){
    char arr[26];
    char a = 'Z';

    for (int i=26; i > 0; i--){
        arr[i] = a;
        a -= 1;
        printf("%c ", arr[i]);
    }
}