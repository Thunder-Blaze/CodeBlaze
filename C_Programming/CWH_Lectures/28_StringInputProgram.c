#include <stdio.h>
#include <string.h>

// allow user to enter 2 strings and then concatenate them by saying that
// str1 is friend of str2

int main(){
    char s1[21];
    char s2[21];
    printf("Input First String - ");
    gets(s1);
    printf("Input Second String - ");
    gets(s2);
    printf("\n%s",strcat(strcat(s1," is a friend of "),s2));
    return 0;
}