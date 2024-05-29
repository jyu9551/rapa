#include <stdio.h>

int main(){
    int score;
    scanf("%d", &score);
    
    if (score >= 80 && score <= 100) printf("A");
    else if (score >= 60 && score <= 80) printf("B");
    else if (score >= 40 && score <= 60) printf("C");
    else if (score >= 20 && score <= 40) printf("D");
    else if (score >= 0 && score <= 20) printf("E");
    else printf("error");
}