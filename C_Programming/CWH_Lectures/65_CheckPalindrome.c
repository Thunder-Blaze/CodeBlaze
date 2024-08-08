#include <stdio.h>
// #include <stdlib.h>
#include <string.h>
// #include <math.h>

int reverseint(int s){
    int revn=0;
    while (s)
    {
        revn=((revn*10)+(s%10));
        s/=10;
    }
    return revn;
}

int main(){
    int s=1231;
    int revn = reverseint(s);
    if (s==revn) {
        printf("The Number is Palindrome");
    } else {
        printf("The Number is not a Palindrome");
    }
    
    return 0;
}