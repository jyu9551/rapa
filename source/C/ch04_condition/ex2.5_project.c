#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int chance = 5;
int low=1, high=100;
int main(){
    srand((unsigned int)time(NULL));
    int random = rand()%100+1;
    printf("정답 : %d\n", random);

    while(chance){
        printf("%d부터 %d 사이의 숫자를 맞춰 보세요(남은 기회 : %d번)", low, high, chance);
    
        int input; scanf("%d", &input);
        if (input == random) {
            printf("정답입니다.");
            return 0;
        }
        else if (input > high || input < low) printf("수의 범위를 잘 보고 숫자를 입력하세요");
        else {
            if (input > random){
                high = input-1;
                printf("DOWN\n\n");
            }
            else {
                low = input;
                printf("UP\n\n");
            }
        }
        chance--;
    }
    printf("5번의 기회를 모두 사용했어요. 아쉽게도 실패했습니다");
    return 0;
}