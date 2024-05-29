#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void sort(int *arr, int len){
    for(int i=0; i<len; i++){
            for (int j=i; j<len; j++){
                if (arr[i] > arr[j]) swap(&arr[i], &arr[j]);
            }
    }
}

int* make_lotto(){
    static int lotto_num[6];
    int cnt[46] = {0, };

    srand((unsigned int)time(NULL));
    for(int i=0; i<6; i++){
        int tmp = rand()%45+1;
        if (cnt[tmp] == 1) i--;
        else {
            lotto_num[i] = tmp;
            cnt[tmp] = 1;
        }
    }
    sort(lotto_num, 6);
    return lotto_num;
}

int main(){
    int lotto[6] = {41, 1, 35, 20, 45, 10};

    // 1. sort() test
    sort(lotto, 6);
    for (int i=0; i<6; i++) printf("%d ", lotto[i]);
    printf("\n");

    // 2. make_lotto()
    int *result = make_lotto();
    for (int i=0; i<6; i++) printf("%d ", result[i]);
}