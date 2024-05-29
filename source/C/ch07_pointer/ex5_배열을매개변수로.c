#include <stdio.h>

void func1(int *p){  // callee
    p[0] = 100; p[1] = 200; *(p+2) = 300;
}
void func2(int *p){  // callee
    *p++=100; *p++=200; *p++=300;
}

int main(){ // caller
    int arr[3] = {10,20,30};

    func1(arr);
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);

    func2(arr);
    printf("%d %d %d", arr[0], arr[1], arr[2]);
}