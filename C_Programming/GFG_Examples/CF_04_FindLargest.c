// Find Largest Number from 3 num
#include <stdio.h>

void largest(int a, int b, int c){
    if (a>=b && a>=c)
    {
        printf("Largest is %d",a);
    } else if (b>=a && b>=c)
    {
        printf("Largest is %d",b);
    } else if (c>=b && c>=a)
    {
        printf("Largest is %d",c);
    }
    
}

int main(){
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    largest(a,b,c);
    return 0;
}