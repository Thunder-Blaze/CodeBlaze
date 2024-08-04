// Reverse the Number Digit Order
#include <stdio.h>

int reverseDigits(int num) 
{ 
    int rev_num = 0; 
    while (num > 0) { 
        rev_num = rev_num * 10 + num % 10; 
        num = num / 10; 
    } 
    return rev_num; 
}

int main(){
    int num;
    printf("Original Number - ");
    scanf("%d",&num);
    int rev_num = reverseDigits(num);
    printf("Reversed Number - %d\n",rev_num);
}