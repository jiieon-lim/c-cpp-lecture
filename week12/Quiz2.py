# 문제 2. 다음 코드의 실행 결과로 올바른 것은?

#include <stdio.h>

struct Student {
    int age;
    int score;
};

int main() {
    struct Student s1 = {20, 90};
    struct Student *p = &s1;

    p->score = 100;

    printf("%d", s1.score);
    return 0;
}

# 1. 20
# 2. 90
# 3. 100
# 4. 컴파일 오류

# --------------------------------------------------
# 정답: ③
# 포인터 p는 구조체 변수 s1의 주소를 저장
# p->score는 s1.score와 동일한 멤버에 접근
# 따라서 score 값이 100으로 변경됨