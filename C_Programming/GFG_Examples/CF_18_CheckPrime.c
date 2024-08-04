// Check if a Number is Prime or Not
#include <stdio.h>

int main(){
    int n;
    printf("Enter the Number - ");
    scanf("%d",&n);
    int prime;
    if (n==0 || n==1) {prime = 0;}
    else {prime = 1;}
    
    for (int i = 2; i < n; i++) {
        if (n%i==0) {
            prime=0;
            break;
        }
    };
    if (prime==1) {
        printf("The Number is Prime");
    } else {
        printf("The Number is Not Prime");
    }
    
    return 0;
}