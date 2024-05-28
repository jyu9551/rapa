#include <stdio.h>
int sum;

int main(){
    for (int i=2; i<=9; i++){
        for(int j=1; j<=9; j++){
            printf("%d x %d = %2d\n", i, j, i*j);
        }
    }
}