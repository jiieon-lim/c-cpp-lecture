#include <stdio.h>

struct Point {
    double x;
    double y;
};

int main() {
    struct Point p1, p2;
    double x, y;

    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);

    x = (p1.x + p2.x) / 2;
    y = (p1.y + p2.y) / 2;

    printf("Center point = (%.1f, %.1f)\n", x, y);
}