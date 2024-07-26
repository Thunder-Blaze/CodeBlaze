#include <stdio.h>

void voider(){
    static int myvar=99; //by default its value is 0
    // when the function is called again
    // myvar's previous final value is used as input
    // and the defination statement is ignored

    //static requires a constant literal
    // it wont work like "static int myvar = func()"
    // where func is a function which returns an integer
    
    printf("The value of my var is %d\n",myvar);
    myvar++;
}

int main(){
    voider();
    voider();
    voider();
    voider();
}