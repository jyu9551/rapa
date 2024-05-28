#include <stdio.h>

void sum1(int _a, int _b, int *total);
void sum1(int _a, int _b, int *total);

int main(){
    int a = 1, b = 10, tot = 0;
    int *result = &tot;
    sum1(a, b, result);
    sum2(a, b, &tot);

    printf("%d 부터 %d 까지 누적합 : %d\n", a, b, *result);
    printf("%d 부터 %d 까지 누적합 : %d\n", a, b, tot);

}

void sum1(int _a, int _b, int *total){
    for (int i=_a; i<=_b; i++) *total += i;
}
void sum2(int _a, int _b, int *total){
    for (int i=_a; i<=_b; i++) total += i;
}
