#include <stdio.h>
// scanf() : ' ', '\t', '\n' 기준  
// gets() : only '\n' 기준
int main(){
    char name[10];
    char address[100];
    
    scanf("%s", name, sizeof(name));
    char buffer_flush[10];
    gets(buffer_flush);
    gets(address);

    printf("%s\n%s", name, address);

}