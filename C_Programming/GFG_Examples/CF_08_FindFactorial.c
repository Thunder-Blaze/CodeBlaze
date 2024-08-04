// Find Factorial of a number n
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac*=i;
    }
    printf("The Factorial of %d is %d",n,fac);
    return 0;
}