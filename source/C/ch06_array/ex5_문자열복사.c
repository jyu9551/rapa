#include <stdio.h>
#include <string.h>

int main(){
    char *str1 = "jennie";
    char *str2 = str1;      // ���� ����
    str1[0] = 'a';
    
    printf("%s %s", str1, str2);
}