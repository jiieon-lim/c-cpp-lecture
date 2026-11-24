#include <stdio.h>


struct Person{
    char name[30];
    char school[30];
    int Grade;
};

int main(){
    struct Person p;
    scanf("%29s", p.name);
    scanf("%29s", p.school);
    scanf("%d", &p.Grade);

    printf("Name : %s\n", p.name);
    printf("School : %s\n", p.school);
    printf("Grade : %d\n", p.Grade);
}