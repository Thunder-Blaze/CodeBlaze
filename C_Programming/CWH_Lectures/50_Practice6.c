#include <stdio.h>


// // Part of Q1
// void addri(int i){
//     printf("The address of 'i' inside Function is %u\n",&i);
// }


// // Part of Q3
// void tentimes(int*x){
//     *x = (*x)*10;
// }


// // Part of Q4
// void SumAvg(int*a,int*b){
//     int temp = *a;
//     *a = (*a+*b);
//     *b = (temp+*b)/2;
// }


// // Part of Q6
// void tenfold(int x){
//     x = x*10;
// }


int main(){


// Q1. Write a program to print the address of a variable, use this address
//     to get the value of the variable
//
    // int i = 5;
    // int* adr_i = &i;
    // printf("The Address of 'i' is %u\n", adr_i);
    // printf("The Value of 'i' is %d\n", *(adr_i));









// Q2. Write a program having a variable 'i', Print the address of 'i'.
//     pass this variable to a func and print its address. Are the addresses
//     same? Why?
//
    // int i = 9;
    // printf("The address of i inside main() is %u\n",&i);
    // addri(i);
//
// Both are different because function copies the value of i inside another variable










// Q3. Write a program to change the value of a variable to 10 times its
//     current value
//
    // int x = 3;
    // printf("Value of x is %d",x);
    // tentimes(&x);
    // printf("Tenfold Value of x is %d",x);









// Q4. Write a program using a function which calculates the sum and avg
//     of two numbers. Use pointers and print the value of sum and avg in main()
//
    // int x = 4;
    // int y = 12;
    // SumAvg(&x, &y);
    // printf("The Sum of x and y is %d\nAnd the rounded Avg of x and y is %d", x, y);









// Q5. Write a program to print the value of a variable i by using "pointer
//     to pointer" type of variable
//
    // int i = 6;
    // int*j = &i;
    // int**k = &j;
    // printf("The Value of 'i' is %d\n",i);
    // printf("The Value of 'i' is %d\n",*j);
    // printf("The Value of 'i' is %d\n",**k);
    // printf("The Address of 'i' is %u\n",&i);
    // printf("The Address of 'i' is %u\n",j);
    // printf("The Address of 'i' is %u\n",*k);
    // printf("The Value of 'j' is %u\n",j);
    // printf("The Value of 'j' is %u\n",*k);
    // printf("The Address of 'j' is %u\n",&j);
    // printf("The Address of 'j' is %u\n",k);
    // printf("The Value of 'k' is %u\n",k);
    // printf("The Address of 'k' is %u\n",&k);
// Here, i = *j = **k , &i = j = *k , &j = k









// Q6. Try problem 3 using call by value and verify that it does not change
//     the value of the said variable
//
    // int x = 3;
    // tenfold(x);
    // printf("Tenfold Value of x is %d which is same as x\n",x);
    // printf("It means the fuction didn't changed the value of x to 10 times");




    return 0;
}