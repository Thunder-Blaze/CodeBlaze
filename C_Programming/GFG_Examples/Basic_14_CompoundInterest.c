#include <stdio.h>
#include <math.h>

int main(){
    float P = 12600;
    float R = 10;
    float T = 2;
    float CI = P*pow((1+(R/100)),T);
    CI -= P;
    printf("The Compound Interest is %.2f",CI);
    return 0;
}