#include <stdio.h>

typedef struct game_info{
    char *name;
    int year;
    int price;
} Game_info;

int main(){
    // 1. ������ ������
    int a = 5;
    int *ap = &a;

    // 2. ����ü ������
    Game_info b = {"Cyber", 2024, 33000};
    Game_info *bp = &b;

    printf("%s %d %d\n", b.name, b.year, b.price);
    printf("%s %d %d\n", (*bp).name, (*bp).year, (*bp).price);
    printf("%s %d %d\n", bp->name, bp->year, bp->price);

    printf("%c %c %c %c %c", *(bp->name), *(bp->name+1), bp->name[2], bp->name[3], bp->name[4]);
}