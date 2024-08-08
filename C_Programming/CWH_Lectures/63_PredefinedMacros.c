#include <stdio.h>

int main(){
    char d[] = __DATE__;
    printf("The Date is %s\n", d);
    char t[] = __TIME__;
    printf("The Time is %s\n", t);
    char f[] = __FILE__;
    printf("The Filename is %s\n", f);
    int l = (int) __LINE__;
    printf("The Line on which l was defined is %d\n", l);
    int a = __STDC__;
    printf("Is the program getting compiled acc to ANSI standard : %d\n", l);
    return 0;
}