#include <stdio.h>

//Typecasting syntax (Change the type of variables while printing)
// (type) var_name


int main(){

    int a = 3;
    float b = 54;
    float c = 54/5;
    float d = (float)54/5; //converts 54 to float, then float divide by int gives float
    printf("The value of a is %d\n", a);

    //printf("The value of b is %d\n", b);
    //Gives 0 since %f should be used for float

    printf("The value of b is %d\n", (int) b);

    printf("The value of c is %f\n", c);
    printf("The value of d is %f\n", d);

    return 0;
}