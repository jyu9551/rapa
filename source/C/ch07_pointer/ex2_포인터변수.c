#include <stdio.h>

int main(){
    int a = 1;
    int b = 2;
    int *pa = &a;
    int *pb = &b;

    printf("(%p) (%08X) %d\n", &a, pa, *pa);
    printf("(%p) (%08X) %d\n", &b, pb, *pb);
}