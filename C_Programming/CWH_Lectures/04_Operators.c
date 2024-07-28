#include<stdio.h>

int main()
{
    int a = 23;
    int b = 5;
    printf("a + b = %d \n",a+b);
    printf("a - b = %d \n",a-b);
    printf("a * b = %d \n",a*b);
    printf("a / b = %d \n",a/b);
    printf("a %% b = %d \n",a%b);
    printf("a++ = %d\n",a++);  // Prints first and then Increments (Post Increment Operator)
    printf("++a = %d\n",++a);  // Increments first and then Prints (Pre Increment Operator)
}