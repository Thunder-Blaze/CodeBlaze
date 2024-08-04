// Print all Natural Factors of a Number
#include <stdio.h>

int main(){
    int n;
    printf("Type a Number - ");
    scanf("%d",&n);
    printf("The divisors of %d are: ",n);
    for (int i = 1; i < ((n/2)+1); i++) {
        if (n%i==0) {
            printf("%d ",i);
        }
    };
    printf("%d",n);
    return 0;
}