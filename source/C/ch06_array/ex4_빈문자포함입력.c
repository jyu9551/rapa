#include <stdio.h>
// scanf() : ' ', '\t', '\n' 기준  
// gets() : only '\n' 기준
int main(){
    char address[100];
    char name[10];
    
    gets(address);    
    scanf("%s", name, sizeof(name));

    printf("%s\n%s", address, name);
}