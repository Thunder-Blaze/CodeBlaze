#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sum(int a, int b) {
    return a + b;
}

void greet(){
    printf("Hello user, have a Good Day\n");
}

int main(){
    printf("The sum of 1 and 2 is %d\n", sum(1,2)); // Testing the function
    int (*fptr) (int, int);                         // Declaring a function pointer
    fptr = &sum;                                    // Creating a function pointer
    int d = (*fptr)(4,6);                           // Dereferencing the function pointer
    printf("The value of d is %d\n",d);             //
    return 0;
}