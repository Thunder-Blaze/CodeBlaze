#include <stdio.h>
#define PI 3.14
#define SQUARE(r) r*r

int main(){
    float var = PI;
    float r = 7;
    printf("The value of PI is %.2f\n",var);
    printf("The Area of Circle is %.2f\n", PI * SQUARE(r));
    return 0;
}