#include <stdio.h>

// 배열을 오름차순으로 정렬하는 선택 정렬 함수
void selectionSortAscending(int arr[], int n) {
    // i번째 위치에 들어갈 "남은 구간의 최솟값"을 찾는 반복
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;   // 현재 구간에서 가장 작은 값의 위치를 i로 가정

        // i+1 ~ 끝까지 훑어보며 더 작은 값이 있으면 위치를 갱신
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        // 최솟값을 i번째 위치와 교환 (교환은 구간당 최대 1번)
        if (minIdx != i) {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}

int main()
{
    int arr[] = { 7, 4, 5, 1, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("초기 상태 배열: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("] \n");

    selectionSortAscending(arr, n);

    printf("정렬된 배열: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("] \n");

    return 0;
}
