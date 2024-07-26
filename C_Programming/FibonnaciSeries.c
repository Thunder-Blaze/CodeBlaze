#include <stdio.h>

// int fib_recursive(int n){
//     if (n==0 || n==1) {
//         return n;
//     } else {
//         return fib_recursive(n-1) + fib_recursive(n-2);
//     }
// }

int main(){
    // Using For Loop
    int a=0,b=1;
    // int c;
    while (a<22)
    {
        // c=a;
        printf("%d\n",a);
        a=a+b;
        b=a-b;
        // b=c;
    }

    
    // Using Recursion
    // for (int i = 0; i < 9; i++)
    // {
    //     printf("%d\n",fib_recursive(i));
    // }
    
    return 0;
}