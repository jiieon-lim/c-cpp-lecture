#include <stdio.h>

struct Box {
    int x1, y1;
    int x2, y2;
};

int main() {
    struct Box b1, b2, result;
    scanf("%d %d %d %d", &b1.x1, &b1.y1, &b1.x2, &b1.y2);
    scanf("%d %d %d %d", &b2.x1, &b2.y1, &b2.x2, &b2.y2);

    result.x1 = b1.x1 < b2.x1 ? b1.x1 : b2.x1;
    result.y1 = b1.y1 < b2.y1 ? b1.y1 : b2.y1;
    result.x2 = b1.x2 > b2.x2 ? b1.x2 : b2.x2;
    result.y2 = b1.y2 > b2.y2 ? b1.y2 : b2.y2;

    printf("%d %d %d %d",result.x1, result.y1, result.x2, result.y2);
}