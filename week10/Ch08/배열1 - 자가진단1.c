#include <stdio.h>

int main(){
    char arr[10];
    char a;

    for (int i=0; i < 10; i++){
        scanf(" %c", &a); // "%c"는 \n를 읽어서 출력함
        arr[i] = a;
        printf("%c", arr[i]);
    }
}