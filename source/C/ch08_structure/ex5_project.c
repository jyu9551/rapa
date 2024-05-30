#include <stdio.h>

typedef struct student {
    int id;
    char name[7];
    int score[3];
    int sum, avg;
} Student;

int main(){
    Student s[3];
    int sorted_idx[3];
    for(int i=0; i<3; i++){
        printf("학번 : "); scanf("%d", &s[i].id);
        printf("이름 : "); scanf("%s", s[i].name);
        printf("국어 영어 수학 : "); scanf("%d %d %d", &s[i].score[0], &s[i].score[1], &s[i].score[2]);
        s[i].sum = (s[i].score[0] + s[i].score[1] + s[i].score[2]);
        s[i].avg = s[i].sum/3.0;
    }
    printf("정렬전\n");
    for (int i=0; i<3; i++){
        printf("%d\t%s %3d\t%3d\t%3d\t%3d\t%3d\n", s[i].id, s[i].name, s[i].score[0], s[i].score[1], s[i].score[2], s[i].sum, s[i].avg);
    }
}