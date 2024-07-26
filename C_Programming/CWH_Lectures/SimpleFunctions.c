#include <stdio.h>

void sum(int a, int b);
void multiply(int a, int b);
void divide(int a, int b);
void subtract(int a, int b);
int modulus(int a, int b);

int main(){
    int a , b, choice;
    printf("Type 1st Number - ");
    scanf("%d",&a);
    printf("Type 2nd Number - ");
    scanf("%d",&b);
    printf("\n\n1. Sum\n2. Multiply\n3. Divide\n4. Subtract\n5. Modulus\nChoose What Operation You Want to Do - ");
    scanf("%d",&choice);
    if (choice==1) {
        sum(a, b);
    } else if (choice==2) {
        multiply(a, b);
    } else if (choice==3) {
        divide(a, b);
    } else if (choice==4) {
        subtract(a, b);
    } else if (choice==5) {
        int c = modulus(a, b);
        printf("The Remainder after Division is - %d",c);
    } else {
        printf("Type a Valid choice");
    }
    
    return 0;
}

void sum(int a, int b){
    printf("The Sum of a and b is %d",a+b);
}
void multiply(int a, int b){
    printf("The Multiplication of a and b is %d",a*b);
}
void divide(int a, int b){
    printf("The Division of a and b is %d",a/b);
}
void subtract(int a, int b){
    printf("%d",a-b);
}
int modulus(int a, int b){
    return a%b;
}