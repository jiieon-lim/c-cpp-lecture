#include <stdio.h>

int main() {
    int score;
    int count[11] = {0};

    while (1) {
        scanf("%d", &score);

        if (score == 0)
            break;

        count[score / 10]++;
    }

    for (int i = 10; i >= 0; i--) {
        if (count[i] == 0)
            continue;

        printf("%d : %d\n", i * 10, count[i]);
    }
}