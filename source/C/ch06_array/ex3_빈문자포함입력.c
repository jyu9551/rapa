#include <stdio.h>
// scanf() : ' ', '\t', '\n' ����  
// gets() : only '\n' ����
int main(){
    char name[10];
    char address[100];
    
    scanf("%s", name, sizeof(name));
    char buffer_flush[10];
    gets(buffer_flush);
    gets(address);

    printf("%s\n%s", name, address);

}