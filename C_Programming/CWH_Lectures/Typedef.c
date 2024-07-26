#include <stdio.h>

// typedef struct Student {
//     int id;
//     int marks;
// } std;


int main(){
    // int* a, b; // This produces pointer a and an integer b
    typedef int* intPointer;
    intPointer a, b; // This produces pointer a and an another pointer b
    int c = 89;
    a = &c;
    b = &c;

    // typedef <previous_name> <alias_name>;
    // typedef unsigned long ul;
    // typedef int integer;
    // ul l1, l2, l3;
    // integer lx = 5;
    // printf("Value of lx is %d\n",lx);

    // std s1, s2;
    // struct Student s1, s2;
    // this is also valid
    // s1.id = 45;
    // s2.id = 89;
    // printf("Value of s1's ID is %d\n",s1.id);
    // printf("Value of s2's ID is %d\n",s1.id);
}