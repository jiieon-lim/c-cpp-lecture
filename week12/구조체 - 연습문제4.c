#include <stdio.h>

struct Person {
    char name[21];
    int score;
};

int main() {
    struct Person p[5];
    int max = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%20s %d", p[i].name, &p[i].score);
    }

    for (int i = 1; i < 5; i++) {
        if (p[i].score > p[max].score) {
            max = i;
        }
    }

    printf("%s %d\n", p[max].name, p[max].score);
}