// Find LCM of 2 Numbers
#include <stdio.h>

int main(){
    int n1 = 15;
    int n2 = 25;
    int LCM = n1>n2?n1:n2;
    while (LCM%n1!=0 || LCM%n2!=0)
    {
        LCM++;
    }
    printf("The LCM is %d\n",LCM);
    return 0;
}