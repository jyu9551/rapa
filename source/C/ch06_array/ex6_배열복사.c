#include <stdio.h>

int main(){
    int arr1[3] = {1,2,3};
    int *arr2 = arr1;
    arr1[0] = 0;
    
    for (int i=0; i<3; i++) printf("%d ", arr1[i]);
    printf("\n");
    for (int i=0; i<3; i++) printf("%d ", arr2[i]);
}