#include <stdio.h>
int sum(int _a, int _b);    // �Լ� ����


int main(){
    int a = 1, b = 100;
    printf("%d ���� %d ���� ������ : %d\n", a, b, sum(a,b));    
    printf("%d ���� %d ���� ������ : %d", a, b, sum(a,b));
}

int sum(int _a, int _b){    // Call By Value �Լ� ����
    int _sum = 0;
    for (int i=_a; i<=_b; i++) _sum += i;
    return _sum;
}
