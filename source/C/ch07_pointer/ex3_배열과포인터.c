#include <stdio.h>

int main(){
    int arr[3] = {10,20,30};
    int *p = arr;

    printf("%d %d %d\n", *arr, *(arr+1),*(arr+2));  // �迭 ������ ������ó��
    printf("%d %d %d\n", p[0], p[1], p[2]);         // ������ ������ �迭ó��
}