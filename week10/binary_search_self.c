#include <stdio.h>

int main(){
    int binarySearch(int arr[], int size, int target){
        int left = 0; // 시작 위치 = 0
        int right = size -1; // 끝 위치 = 배열 크기 -1

        while (left <= right){ // 시작 위치 <= 끝 위치 동안 반복
            int M = (left + right) / 2;
            if (M == target){
                return M;
                break;
            } else if (M < terget){
                left = left + 1;
            } else {
                M = M - 1;
            }
        }

        if (M != terget){
            return -1;
        }
    }
}