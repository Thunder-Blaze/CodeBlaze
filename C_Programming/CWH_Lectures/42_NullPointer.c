#include <stdio.h>

int main(){
    int x = 10;
    int *ptr = NULL;
    // ptr can not be dereferenced right now
    ptr = &x;
    // Comment and Uncomment above line to view diff results

    // now ptr can be dereferenced since it is not null now and stores
    // the address of variable x
    if (ptr != NULL)
    {
        printf("The address of x is %d\n", ptr);
        printf("The value of x is %d\n", *ptr);
    } else {
        printf("The ptr is a NULL Pointer");
    }
    
    return 0;
}