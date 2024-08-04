// Check if a Number is Prime or Not
#include <stdio.h>

int main(){
    int sn,en;
    printf("Interval Start Number - ");
    scanf("%d",&sn);
    printf("Interval End Number - ");
    scanf("%d",&en);
    for (int n = sn; n < en; n++)
    {
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
            printf("%d\n",n);
        }
    };
    
    return 0;
}