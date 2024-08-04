// Print Armstrong Numbers from 1 to 1000
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
    // int n = 153;
    for (int n = 1; n < 1000; n++)
    {
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
            printf("%d\n",n);
        }
    }
    
    return 0;
}