// Sum Fibonacci Numbers at Even Indexes up to N Terms
#include <stdio.h>

int main(){
    int a = 1;
    int b = 1;
    int n;
    int sum;
    printf("Type the Number of Even Terms of Fibonacci Series - ");
    scanf("%d",&n);
    int i = 1;
    while (n) {
    // for (int i = 1; i <= n; i++) {
        if (i%2==0) {
            sum+=a;
            n--;
        }
        i++;
        int temp = a;
        a = b;
        b = temp + b;
    }
    printf("Sum - %d",sum);
    return 0;
}