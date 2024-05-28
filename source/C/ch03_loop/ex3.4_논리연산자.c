#include <stdio.h>
// 논리연산자 : &&, ||, !
int main(){
    // 1. &&
    int i=1, j=10, h=10;
    printf("%s ", ((i<j) && (++j>h)) ? "true" : "false"); // true -> j=11
    printf("%d\n", j);

    i=1, j=10, h=10;
    printf("%s ", ((i>j) && (++j>h)) ? "true" : "false"); // false -> j=10 (좌항이 false면 우항을 처리X)
    printf("%d\n", j);

    // 2. ||
    i=1, j=10, h=10;
    printf("%s ", ((i<j) || (++j>h)) ? "true" : "false"); // true -> j=10 (좌항이 true면 우항을 처리X)
    printf("%d\n", j);

    i=1, j=10, h=10;
    printf("%s ", ((i>j) || (++j>h)) ? "true" : "false"); // true -> j=11 
    printf("%d\n", j);
}