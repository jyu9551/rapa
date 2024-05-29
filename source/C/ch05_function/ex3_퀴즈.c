#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int randnumber(int level){
    return ((rand()%4)+1)+(level-1)*4;
}

void show(int level, int num1, int num2){
    printf("%d레벨 구구단을 외자~\n", level);
    printf("힌트 : %d x %d >> ", num1, num2);
}

int main(){
    srand((unsigned int) time(NULL));
    
    for (int i=1; i<=3; i++){
        int rand1=randnumber(i), rand2=randnumber(i);
        show(i, rand1, rand2);
        int input; scanf("%d", &input);

        if (input == rand1*rand2) printf("%d단계 정답입니다\n\n", i);
        else {
            printf("%d단계 오답입니다. 실패 종료입니다\n\n", i);
            return 0;
        }
    }
    printf("비밀번호를 모두 맞췄습니다. 성공입니다");
}