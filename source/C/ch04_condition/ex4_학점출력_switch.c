#include <stdio.h>

int main(){
    int score = 90;
    
    (score==100)? (score=99) : (score=100);

    switch(score/10) {
        case 9 : case 8: printf("A");
                 break;
        case 7 : case 6 : printf("B");
                 break;
        case 5 : case 4 : printf("C");
                 break;
        case 3 : case 2 : printf("D");
                 break;
        case 1 : case 0 : printf("E");
                 break;
        default : printf("dice X");
    }
}