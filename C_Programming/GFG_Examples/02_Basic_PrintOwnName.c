#include <stdio.h>

int main(){
    char nam[30];
    printf("Enter Your Name - ");
    
    //M1
    // scanf("%s",nam);
    //M2
    fgets(nam, 30, stdin);
    
    printf("Your Name is %s",nam);
    return 0;
}