#include <stdio.h>

int main(){
    float f,c;
    printf("Temp in Fahrenheit - ");
    scanf("%f",&f);
    c = (f-32)*5.0/9.0;
    printf("Temp in Celsius - %.2f",c);

    return 0;
}