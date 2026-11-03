#include <stdio.h>

int main(){
    int binarySearch(int arr[], int size, int target){
        int left = 0; // 시작 위치 = 0
        int right = size -1; // 끝 위치 = 배열 크기 -1

        while (left <= right){ // 시작 위치 <= 끝 위치 동안 반복
            int M = (left + right) / 2;  // 중간 위치 계산

            if (arr[M] == target){  // 중간 위치 = 찾는 위치
                return M + 1; // 중간 위치를 반환하고 참색 종료
                // break;  사용X 윗줄에 다 포함됨
            } else if (arr[M] < target){ // 중간 위치 < 찾는 위치
                left = M + 1;  // 시작 위치 = 중간 위치 +1 로 변경
            } else {
                right = M - 1;  // 끝 위치 = 중간 위치 -1 로 변경
            }
        }
        return -1; // 반복이 종료될 때까지 중간값 못 찾았으면 -1 반환ㄴ
         
    }
}