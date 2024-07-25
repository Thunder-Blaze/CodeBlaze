// Given 2 numbers a and b, add them, subtract them and
// assign them to a and b using Call By Reference
#include <stdio.h>

void func(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b - *b;
}

int main(){
    int a = 9;
    int b = 2;
    printf("The Value of a is %d and b is %d\n",a,b);
    func(&a,&b);
    printf("The Addition is %d and Subtraction is %d",a,b);
    return 0;
}