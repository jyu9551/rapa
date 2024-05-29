#include <stdio.h>

void swap1(int _a, int _b){     // Call by value
    int tmp = _a;
    _a = _b;
    _b = tmp;
}
void swap2(int *_a, int *_b){   // Call by reference
    int tmp = *_a;
    *_a = *_b;
    *_b = tmp;
}

int main(){
    int a=1;
    int b=2;

    printf("swap()  이전 : %d(%p) %d(%p)\n", a, &a, b, &b);

    swap1(a,b);
    printf("swap1() 이후 : %d(%p) %d(%p)\n", a, &a, b, &b);

    swap2(&a, &b);
    printf("swap2() 이후 : %d(%p) %d(%p)\n", a, &a, b, &b);
}