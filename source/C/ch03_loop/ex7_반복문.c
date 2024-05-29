#include <stdio.h>
// 반복문 : for, while, do-while(반드시 1회 수행 후 반복)

int main(){
    // 1. for
    for (int i=1; i<=10; i++){
        printf("%d ", i);
    }
    printf("\n");

    // 2. while
    int j=1;
    while(j < 11)
    {
        printf("%d ", j++);
    }
    printf("\n");

    // 3. do-while
    int k=1;
    do{
        printf("%d ", k++);

    } while(k < 11);
    
    return 0;
}