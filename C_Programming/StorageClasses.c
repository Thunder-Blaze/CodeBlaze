#include <stdio.h>
// we can include another file like
//#include name.c

int b = 4; // global variable //default value is garbage

int func1(){
    static int x; //static variable //default value is 0
    printf("The value of var x is %d\n",x);
    x++;
}

int main(){
    auto int a = 3; // or 'int a = 3;'  //local variable
    // default value is garbage
    printf("a and b are %d and %d\n",a,b);
    func1();
    func1();
    return 0;
}

//extern is pretty much useless, it is used in case to tell the
//compiler that the variable is defined somewhere else in the
//program its synatax is
// extern data_typr var_name = value;
