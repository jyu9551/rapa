#include <stdio.h>

int main(){
    int a = 1;
    int b = 2;
    char *str = "hello";

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("&str=%p str=%p\n", &str, str);

    a = 10, b = 20, str="hi";
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("&str=%p str=%p\n", &str, str);
    
}