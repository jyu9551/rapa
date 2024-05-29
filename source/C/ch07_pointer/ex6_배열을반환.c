#include <stdio.h>

int *func(int *arr){
    static int arr2[3];     // **함수가 종료되면 지역변수인 arr2가 지워짐 -> static 사용
    arr2[0] = arr[0];
    arr2[1] = arr[1];
    arr2[2] = arr[2];

    arr2[0] = 99;
    return arr2;
}

int main(){
    int arr[3] = {1,2,3}; 
    int *p = func(arr);

    printf("before : %d %d %d\n", *arr, *(arr+1), *(arr+2));
    printf("after  : %d %d %d", *p, *(p+1), *(p+2));
}