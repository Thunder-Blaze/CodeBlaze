// Check if The Number is Palindrome or not
// Palindrome means the reversed number is equal to original number
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
    printf("Number - ");
    scanf("%d",&num);
    int rev_num = reverseDigits(num);
    if (rev_num==num) {
        printf("The Number is a Palindrome");
    } else {
        printf("The Number is Not a Palindrome");
    }
    
}