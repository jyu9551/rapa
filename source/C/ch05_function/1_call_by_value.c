#include <stdio.h>
int sum(int _a, int _b);    // 함수 선언


int main(){
    int a = 1, b = 100;
    printf("%d 부터 %d 까지 누적합 : %d\n", a, b, sum(a,b));    
    printf("%d 부터 %d 까지 누적합 : %d", a, b, sum(a,b));
}

int sum(int _a, int _b){    // Call By Value 함수 정의
    int _sum = 0;
    for (int i=_a; i<=_b; i++) _sum += i;
    return _sum;
}
