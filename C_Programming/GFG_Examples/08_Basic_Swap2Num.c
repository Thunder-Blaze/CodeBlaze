#include <stdio.h>

void swap(int* x, int* b){
    int temp = *x;
    *x = *b;
    *b = temp;
}

int main(){
    int a = 3;
    int b = 8;
    printf("The value of a & b is %d and %d\n",a,b);
    swap(&a, &b);
    printf("After Swapping:\n");
    printf("The value of a & b is %d and %d\n",a,b);
}