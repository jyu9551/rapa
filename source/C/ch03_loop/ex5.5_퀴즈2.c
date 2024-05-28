#include <stdio.h>

int main(){
    int floor = 4;
    int max = 2*floor - 1;
    for (int i=1; i<=floor; i++){
        for (int j=0; j<(max-(2*i-1))/2; j++) printf(" ");
        for (int j=0; j<(2*i-1); j++) printf("*");
        for (int j=0; j<(max-(2*i-1))/2; j++) printf(" ");
        printf("\n");
    }
}