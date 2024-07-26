#include <stdio.h>

int main(){
    int age;
    printf("Enter your Age - ");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("You're Eligible to Vote");
    } else {
        int x = 18-age;
        printf("You're %d Years younger to Vote",x);
    }
    
    return 0;
}