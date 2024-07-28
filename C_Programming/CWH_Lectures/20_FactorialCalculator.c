#include <stdio.h>

// int factorial(int number){
//     if (number==0 || number==1){
//         return 1;
//     } else {
//         return (number * factorial(number - 1) );
//     }
// };

int main(){

    // Using For Statement
    int num;
    int fac=1;
    printf("Type a number - ");
    scanf("%d",&num);
    for (num; num > 1; num--)
    {
        printf("%dx",num);
        fac*=num;
    }
    printf("1 = %d",fac);
    
    // Using Recursions
    // int number;
    // printf("Enter a number - ");
    // scanf("%d",&number);
    // printf("Factorial of %d is %d\n",number,factorial(number));
    return 0;
}
