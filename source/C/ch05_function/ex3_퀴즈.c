#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int randnumber(int level){
    return ((rand()%4)+1)+(level-1)*4;
}

void show(int level, int num1, int num2){
    printf("%d���� �������� ����~\n", level);
    printf("��Ʈ : %d x %d >> ", num1, num2);
}

int main(){
    srand((unsigned int) time(NULL));
    
    for (int i=1; i<=3; i++){
        int rand1=randnumber(i), rand2=randnumber(i);
        show(i, rand1, rand2);
        int input; scanf("%d", &input);

        if (input == rand1*rand2) printf("%d�ܰ� �����Դϴ�\n\n", i);
        else {
            printf("%d�ܰ� �����Դϴ�. ���� �����Դϴ�\n\n", i);
            return 0;
        }
    }
    printf("��й�ȣ�� ��� ������ϴ�. �����Դϴ�");
}