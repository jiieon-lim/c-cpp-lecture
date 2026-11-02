#include <stdio.h>

int main() {
    int num = 0;
    const char* list[] = {"ADD", "EDIT", "DEL"};

    printf("1. ADD\n");
    printf("2. EDIT\n");
    printf("3. DEL\n");
    printf("Select: \n");

    scanf("%d", &num);

    if (num >= 1 && num <= 3) {
        printf("You selected %s.", list[num - 1]);
    } else {
        printf("Wrong choice.");
}
}