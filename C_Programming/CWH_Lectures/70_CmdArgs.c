#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The number of args is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("The Value of Arg %d is %s\n", i, argv[i]);
    }
    
    return 0;
}
