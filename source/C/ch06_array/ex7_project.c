#include <stdio.h>
#include <string.h>
int min_height=999, max_height=0, sum;
char *min_name, *max_name;  // sol 1
int min_idx, max_idx;       // sol 2

int main(){
    char *name[5] = {"유수민", "김현식", "땅땅이", "새대갈", "슘당이"};

    for (int i=0; i<5; i++){
        printf("%s의 키는 ? ", name[i]);
        int in; scanf("%d", &in);

        sum += in;
        if (min_height > in) {
            min_height = in;
            min_name = name[i];     // sol 1
            min_idx = i;            // sol 2
        }
        if (max_height < in) {
            max_height = in;
            min_name = name[i];     // sol 1
            max_idx = i;            // sol 2
        }
    }
    printf("- 평균키 : %.2lf\n", sum/5.0);
    printf("- 최장신 친구 %s의 키는 %d\n", name[max_idx], max_height);
    printf("- 최단신 친구 %s의 키는 %d", name[min_idx], min_height);
}