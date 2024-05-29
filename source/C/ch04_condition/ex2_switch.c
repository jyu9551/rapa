#include <stdio.h>

int main(){
    int num = 3;
    switch(num) {
        case 1 : printf("dice 1");
                 break;
        case 2 : printf("dice 2");
                 break;
        case 3 : printf("dice 3");
                 break;
        case 4 : printf("dice 4");
                 break;
        case 5 : printf("dice 5");
                 break;
        case 6 : printf("dice 6");
                 break;
        default : printf("dice X");
    }
}