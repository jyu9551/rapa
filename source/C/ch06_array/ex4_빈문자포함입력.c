#include <stdio.h>
// scanf() : ' ', '\t', '\n' ����  
// gets() : only '\n' ����
int main(){
    char address[100];
    char name[10];
    
    gets(address);    
    scanf("%s", name, sizeof(name));

    printf("%s\n%s", address, name);
}