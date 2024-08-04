// Create a Simple Calculator that supports +,-,*,/
#include <stdio.h>

float Operation(float n1, float n2, char o){
    if (o=='+')
    {
        return n1+n2;
    } else if (o=='-')
    {
        return n1-n2;
    } else if (o=='*')
    {
        return n1*n2;
    } else if (o=='/')
    {
        return n1/n2;
    } else {
        printf("Error\n");
        return (float)1.298372;
    }
    
}

int main(){
    float n1,n2;
    char o;
    printf("First Number - ");
    scanf("%f",&n1);
    printf("Second Number - ");
    scanf("%f",&n2);
    printf("Operator - ");
    getchar();
    scanf("%c",&o);
    float x = Operation(n1,n2,o);
    if (x != (float)1.298372)
    {
        printf("Result => %.2f\n",x);
        printf("Explanation => %.2f %c %.2f = %.2f\n",n1,o,n2,x);
    }
    return 0;
}