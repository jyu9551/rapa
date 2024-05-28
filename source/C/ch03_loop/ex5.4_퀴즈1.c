#include <stdio.h>

int main(){
    for (int i=1; i<=9; i++){
        for (int j=2; j<=7; j++){
            printf("%d x %d = %d\t", j, i, i*j);
        }
        printf("\n");
    }
}