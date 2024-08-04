// Check Leap Year or Not
//https://www.geeksforgeeks.org/c-programming-examples/?ref=ml_lbp

#include <stdio.h>

int main(){
    int y;
    scanf("%d",&y);
    if ((y%4==0 && y%100!=0) || (y%400==0))
    {
        printf("The Year is a Leap Year");
    } else {
        printf("The Year is Not a Leap Year");
    }
    
    return 0;
}