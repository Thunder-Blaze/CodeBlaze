#include <stdio.h>

int main(){

    int marks[] = {12, 34, 53, 66};
    
    int* ptr = &marks[0];
    // int* ptr = marks;      // Works same as above

    for (int i = 0; i < ((sizeof(marks))/(sizeof(int))); i++)
    {
        printf("The marks at index %d is %d\n",i,*(ptr+i));
    }

    return 0;
}