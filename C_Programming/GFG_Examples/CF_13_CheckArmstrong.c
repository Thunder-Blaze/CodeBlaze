// Check if a Number is Arm Strong Number
// Eg - 1, 153, 370, 371, and 407
// 1^3 + 5^3 + 3^3 = 153
// Cube of Digits is Equal to the Number itself
#include <stdio.h>
#include <math.h>

int countdigits(int n){
    int ten=1;
    int count=0;
    while (n/ten)
    {
        count++;
        ten*=10;
    }
    return count;
}

int main(){
    int n = 1634;
    int c = countdigits(n);

    // Seperating Number into Digits
    int digits[c];
    for (int i = 0; i < c; i++)
    {
        int x = (floor((n)%((int)pow(10,i+1))) - floor((n)%((int)pow(10,i))))/(pow(10,i));
        digits[c-i-1] = x;
    }
    int sum = 0;
    for (int i = 0; i < c; i++)
    {
        sum+=(int)(pow(digits[i],c));
    }
    if (sum==n)
    {
        printf("The Number is Armstrong Number\n");
    } else {
        printf("The Number is Not an Armstrong Number\n");
    }
    
    return 0;
}