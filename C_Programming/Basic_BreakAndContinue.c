#include <stdio.h>

int main(){
    int age = 0;
    for (;age < 100;)
    {
        printf("Type your age - ");
        scanf("%d",&age);
        if (age == 10) {
            printf("Breaking Loop\n");
            break;
        } else if (age == 18) {
            printf("Loop Continued\n");
            continue;
        };
        printf("Your age is %d\n",age);
    };
    
    return 0;
}