#include <stdio.h>

// Call by Value
// All the Programs Made by Me use this I Guess

// Call by Reference
// Also known as Call by Address

void swap(int *x, int*y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a=34, b=75;
    printf("The numbers are %d and %d.\n",a,b);
    swap(&a,&b);
    printf("The numbers are %d and %d.\n",a,b);
    return 0;
}