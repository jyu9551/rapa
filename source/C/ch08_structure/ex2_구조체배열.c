#include <stdio.h>

typedef struct student {
    int id;
    char name[10];
    double grade;
} Student;

void print_struct(Student _sArr){
    printf("%2d  %6s  %.1lf\n", _sArr.id, _sArr.name, _sArr.grade);
}

int main(){
    Student sArr[3] = {
        {1, "Jennie", 3.5},
        {2, "Rose", 4.0},
        {3, "Lisa", 4.5}
    }; 

    printf("학번 이름  학점\n");
    for (int i=0; i<3; i++){
        print_struct(sArr[i]);
    }
}