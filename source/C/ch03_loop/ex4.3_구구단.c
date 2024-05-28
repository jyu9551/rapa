#include <stdio.h>

int main(){
    int input; 
    scanf("%d", &input);

    for (int j=1; j<=9; j++){
        printf("%d x %d = %2d\n", input, j, input*j);
}