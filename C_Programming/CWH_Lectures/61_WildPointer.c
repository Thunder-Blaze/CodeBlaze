#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    int *ptr;       // This is a Wild Pointer
    ptr = &a;       // ptr is no longer wild

    // We should initialize the pointer as Null Pointer for Saftey
    int *ptr = NULL;    // This is not a Wild Pointer
    ptr = &a;

    return 0;
}