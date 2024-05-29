#include <stdio.h>

typedef struct vision{
    double left;
    double right;
} Vision;

Vision exchange(Vision robot){
    double tmp = robot.left;
    robot.left = robot.right;
    robot.right = tmp;

    return robot;
} 

int main(){
    Vision robot;
    scanf("%lf %lf", &robot.left, &robot.right);
    printf("Before : left = %.1f, right = %.1f\n", robot.left, robot.right);

    robot = exchange(robot);
    printf("After  : left = %.1f, right = %.1f\n", robot.left, robot.right);
}