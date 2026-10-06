#include <stdio.h>

// 배열을 오름차순으로 정렬하는 삽입 정렬 함수
void insertionSortAscending(int arr[], int n) {
    // arr[0]은 이미 정렬된 것으로 보고, 1번 위치부터 하나씩 삽입
    for (int i = 1; i < n; i++) {
        int key = arr[i];   // 정렬된 구간에 끼워 넣을 값
        int j = i - 1;      // 정렬된 구간의 맨 끝부터 비교 시작

        // key보다 큰 값은 한 칸씩 오른쪽으로 밀어서 자리를 만든다
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // 밀기가 끝난 뒤 비어 있는 자리에 key 삽입
        arr[j + 1] = key;
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

    insertionSortAscending(arr, n);

    printf("정렬된 배열: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("] \n");

    return 0;
}
