#include <stdio.h>

int main(){
// Q1. Which of the following is invalid in C ?
//     a. int a = 1; int b = a;
//     b. int v = 3*3;
//     c. char dt = '21 dec 2020';
//
// Ans - ofc C is wrong since char takes only 1 character unless
// it is defined as a string or array






// Q2. What data type will 3.0/8-2 return ?
//
// Ans - 3.0/8 will return 0.375
//       0.375 - 2 will return -1.625
//       which is a float






// Q3. Write a program to check whether a number is divisible
// by 97 or not.
// Ans -
    int a;
    printf("Type the number to be Checked - ");
    scanf("%d",&a);
    if ((a%97)==0)
    {
        printf("Number is divisible");
    } else if ((a%97)!=0)
    {
        printf("Number is not divisible");
    };
    





// Q4. Explain step by step Evaluation of 3*x/y-z+k, where
// x=2, y=3, z=3 and k=1
//
// Ans - 3*2/3 will be evaluated first left to right
//       because precedence order is */%  >  +-  >  =
//       6/3 will give 2
//       2-3+1 will give -1+1 which is 0
//       So Final Answer is 0.






// Q5. 3.0 + 1 will be:
//     a. Int
//     b. Float
//     c. Char
//
// Ans- It will be float

    return 0;
}