#include <stdio.h>

struct Person {
    char name[30];
    int age;
};

int main() {
    struct Person p1 = {"Yejun", 12};

    struct Person p2;
    scanf("%29s %d", p2.name, &p2.age);

    printf("Your name: %s, age: %d\n", p1.name, p1.age);
    printf("Friend's name: %s, age: %d\n", p2.name, p2.age);
}