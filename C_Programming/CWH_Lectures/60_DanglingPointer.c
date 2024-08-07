#include <stdio.h>
#include <stdlib.h>

// Part of M2
// int *myFunc(){
//     // a is local variable and goes out of scope on function return over
//     int a = 34;
//     return &a;
// }

int main(){

    // M1
    // char *str = "Hi World!";
    // int a;
    // int *ptr = (int*) malloc(sizeof(int));
    // free(ptr);      // ptr now becomes Dangling Pointer
    // ptr = NULL;     // ptr no longer Dangling








    // M2
    // int *ptr = myFunc();    // ptr points to invalid memory location
    // printf("%d", *ptr);
    // return 0;








    // M3 - idk why but dangling pointer not forming in this one
    int *ptr;
    // Everything inside this curly braces is a scope (like a block in JS)
    {
        int i = 0;
        ptr = &i;   // ptr points to invalid location
    }
    // ptr is now (not) a dangling pointer
    printf("%d",*ptr);
    return 0;
}