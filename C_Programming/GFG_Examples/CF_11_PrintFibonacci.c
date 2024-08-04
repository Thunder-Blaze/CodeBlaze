// Print Fibonacci Series
#include <stdio.h>

int main(){
    int a = 0;
    int b = 1;
    int n;
    printf("Type the Number of Terms of Fibonacci Series - ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",a);
        int temp = a;
        a = b;
        b = temp + b;
    }
    return 0;
}