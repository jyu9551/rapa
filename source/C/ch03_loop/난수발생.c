#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// rand() : 0 ~ 32767 난수
int main(){
    srand((unsigned int)time(NULL));    // 난수 초기화

    printf("%d\n", rand()%100 + 1);
    printf("%d\n", rand()%100 + 1);
    printf("%d\n", rand()%100 + 1);
    printf("%d\n", rand()%100 + 1);

}