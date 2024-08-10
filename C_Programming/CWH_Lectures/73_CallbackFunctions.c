#include <stdio.h>

int sum(int i, int j){
    return i+j;
}

float avg(int i, int j){
    return (i+j)/2.0;
}

void greetHelloAndPrint(int (*fptr)(int, int)){
    printf("Hello User\n");
    printf("The sum of 5 and 7 is %d\n",fptr(5,7));
}

void greetGmAndPrint(int (*fptr)(int, int)){
    printf("Good Morning User\n");
    printf("The sum of 5 and 7 is %d\n",fptr(5,7));
}

void greetGaAndPrint(float (*fptr)(int, int)){
    printf("Good Afternoon User\n");
    printf("The sum of 5 and 7 is %.1f\n",fptr(5,7));
}

void greetGeAndPrint(float (*fptr)(int, int)){
    printf("Good Evening User\n");
    printf("The sum of 5 and 7 is %.1f\n",fptr(5,7));
}

int main(){
    int (*ptr)(int, int);
    ptr = &sum;
    float (*ptr2)(int, int);
    ptr2 = &avg;
    greetGmAndPrint(ptr);
    greetHelloAndPrint(ptr);
    greetGaAndPrint(ptr2);
    greetGeAndPrint(ptr2);
    
    return 0;
}