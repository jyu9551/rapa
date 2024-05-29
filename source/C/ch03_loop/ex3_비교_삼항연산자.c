#include <stdio.h>
#include <stdbool.h>
// 비교연산자
// 삼항연산자
int main(){
    int a=3, b=4;

    if (a < b) printf("true\n"); else printf("false\n");
    (a < b)? (printf("true\n")) : (printf("false\n"));

    printf("%s", (a > b)? "true" : "false");
}