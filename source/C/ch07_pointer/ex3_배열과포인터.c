#include <stdio.h>

int main(){
    int arr[3] = {10,20,30};
    int *p = arr;

    printf("%d %d %d\n", *arr, *(arr+1),*(arr+2));  // 배열 변수를 포인터처럼
    printf("%d %d %d\n", p[0], p[1], p[2]);         // 포인터 변수를 배열처럼
}