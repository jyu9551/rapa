#include <stdio.h>

typedef struct student {
    char name[10];
    int age;
} Student;


int main(){
    Student s1 = {"Jennie", 20};
    printf("%d %s", s1.age, s1.name);
}