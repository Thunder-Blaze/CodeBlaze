// Find Sum of N Natural Numbers
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    printf("The Sum is %d",sum);
    return 0;
}