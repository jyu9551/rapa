#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int chance = 5;
int low=1, high=100;
int main(){
    srand((unsigned int)time(NULL));
    int random = rand()%100+1;
    printf("���� : %d\n", random);

    while(chance){
        printf("%d���� %d ������ ���ڸ� ���� ������(���� ��ȸ : %d��)", low, high, chance);
    
        int input; scanf("%d", &input);
        if (input == random) {
            printf("�����Դϴ�.");
            return 0;
        }
        else if (input > high || input < low) printf("���� ������ �� ���� ���ڸ� �Է��ϼ���");
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
    printf("5���� ��ȸ�� ��� ����߾��. �ƽ��Ե� �����߽��ϴ�");
    return 0;
}