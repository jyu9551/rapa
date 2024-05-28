#include <stdio.h>
int sum;

int main(){
    for (int i = 1; i<=10; i++) {
        printf("1 ");
        for (int j=2; j<=i; j++) printf("+ %d ", j);   
        sum += i;
        printf("= %d\n", sum);
    }
}   