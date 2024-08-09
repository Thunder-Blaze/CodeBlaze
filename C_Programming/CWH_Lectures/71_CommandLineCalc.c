#include <stdio.h>
#include <string.h>

/*
You have to create a command line utility to add,subtract,divide, multiply
two numbers. First arg of your c program must be the operation.
The next two arguments eing 2 numbers
Eg-
        >> Command.exe add 45 4
        >> 49
*/

int main(int argc, char const *argv[])
{
    if (argc==4) {
        int a,b;
        sscanf(argv[2], "%d", &a);
        sscanf(argv[3], "%d", &b);
        if (strcmp(argv[1],"add")==0) {
            if ((a!=EOF)&&(b!=EOF)) {
                printf("%d\n", (a + b));
            } else {
                printf ("Error in Argument 2 & 3");
            }
        } else if (strcmp(argv[1],"subtract")==0) {
            if ((a!=EOF)&&(b!=EOF)) {
                printf("%d\n", (a - b));
            } else {
                printf ("Error in Argument 2 & 3");
            }
        } else if (strcmp(argv[1],"multiply")==0) {
            if ((a!=EOF)&&(b!=EOF)) {
                printf("%d\n", (a * b));
            } else {
                printf ("Error in Argument 2 & 3");
            }
        } else if (strcmp(argv[1],"divide")==0) {
            if ((a!=EOF)&&(b!=EOF)) {
                printf("%d\n", (a / b));
            } else {
                printf ("Error in Argument 2 & 3");
            }
        } else if (strcmp(argv[1],"remainder")==0) {
            if ((a!=EOF)&&(b!=EOF)) {
                printf("%d\n", (a % b));
            } else {
                printf ("Error in Argument 2 & 3");
            }
        } else {
            printf("Wrong Argument 1\n");
            printf("The correct arguments are - 'add', 'subtract', 'multiply', 'divide' and 'remainder'\n");
        }
    } else if (argc>4) {
        printf("Error : More Arguments Given\n");
    } else if (argc<4) {
        printf("Error : Less Arguments Given\n");
    }
    return 0;
}
