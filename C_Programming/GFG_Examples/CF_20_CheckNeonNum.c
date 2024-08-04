// Check if a Number is Neon or not
// a number where the sum of digits of the square of the number is equal to the number
#include <stdio.h>

int main(){
    int n;
    printf("Type a Number - ");
    scanf("%d",&n);
    int sqn = n*n;
    int sum = 0;
    while (sqn)
    {
        sum += sqn%10;
        sqn = sqn/10;
    }
    if (sum==n)
    {
        printf("The Number is Neon\n");
    } else {
        printf("The Number is Not Neon\n");
    }
    
    return 0;
}