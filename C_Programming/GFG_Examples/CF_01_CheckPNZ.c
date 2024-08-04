// Check Positive, Negetive or Zero
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if (n==0)
    {
        printf("Number is Zero\n");
    } else if (n>0) {
        printf("Number is Positive\n");
    } else {
        printf("Number is Negetive\n");
    }
    
    return 0;
}