#include <stdio.h>

int main(){

// Write a Program to Find Grade of a Student based on marks
    // int marks;
    // printf("Enter Your Marks - ");
    // scanf("%d",&marks);
    // if (marks>=90 && marks<=100) {
    //     printf("Your Grade is A");
    // } else if (marks>=80 && marks<90) {
    //     printf("Your Grade is B");
    // } else if (marks>=70 && marks<80) {
    //     printf("Your Grade is C");
    // } else if (marks>=60 && marks<70) {
    //     printf("Your Grade is D");
    // } else if (marks>=50 && marks<60) {
    //     printf("Your Grade is E");
    // } else if (marks<50) {
    //     printf("Your Grade is F");
    // }





// Q1. What will be the output of the program
//     int a = 10;
//     if (a==11)
//         printf("I am 11");
//     else
//         printf("I am Not 11");
    
// If there is only one line in if statemment
// we can write that line without curly braces









// Q2. Write a program to determine whether a student has passed
// or failed. To pass, a student requires a total of 40% and at
// least 33% in each subject. Assume there are 3 subjects and take
// the marks as input from the user
    // int marks_sb1;
    // int marks_sb2;
    // int marks_sb3;
    // printf("Your Marks in Subject 1 is - ");
    // scanf("%d",&marks_sb1);
    // printf("Your Marks in Subject 2 is - ");
    // scanf("%d",&marks_sb2);
    // printf("Your Marks in Subject 3 is - ");
    // scanf("%d",&marks_sb3);
    // // 0 for fail and 1 for pass
    // printf("\n");
    // int sbr1, sbr2, sbr3;
    // marks_sb1>=33?(sbr1=1):(sbr1=0);
    // marks_sb2>=33?(sbr2=1):(sbr2=0);
    // marks_sb3>=33?(sbr3=1):(sbr3=0);
    // sbr1?printf("You passed in Subject 1\n"):printf("You passed in Subject 1\n");
    // sbr2?printf("You passed in Subject 2\n"):printf("You passed in Subject 2\n");
    // sbr3?printf("You passed in Subject 3\n"):printf("You passed in Subject 3\n");
    // ((((marks_sb1+marks_sb2+marks_sb3)/3)>=40)&&(sbr1&&sbr2&&sbr3))?printf("\nYou Passed"):printf("\nYou Failed");









// Q3. Calculate income tax paid by an employrr to the government as per the slabs below
//      Income Slab          Tax
//       Below 2.5L          0%
//       2.5 - 5.0L          5%
//       5.0 - 10.0L         20%
//       Above 10.0L         30%
    // float income;
    // printf("Type your income in Lakhs - ");
    // scanf("%f",&income);
    // float tax;
    // if (income<2.5) {
    //     tax=0;
    // } else if (income>=2.5 && income<5.0) {
    //     tax = income*5.0/100.0;
    // } else if (income>=5.0 && income<10.0) {
    //     tax = income*20.0/100.0;
    // } else {
    //     tax = income*30.0/100.0;
    // }
    // printf("\nYour Calculated Income Tax is %.3f Lakhs",tax);









// Q4. Write a program to find whether a year entered by the user is a leap year or not
    // int year;
    // printf("Leap Year Checker\n\nType the Year - ");
    // scanf("%d",&year);
    // if ((year%4==0 && year%100!=0) || (year%400==0)){
    //     printf("Yes, The Entered Year is a Leap Year");
    // } else {
    //     printf("No, The Entered Year is not a Leap Year");
    // };









// Q5. Write a program to find whether a character entered by the user is lowercase or not
    // char ch;
    // printf("Enter a Letter - ");
    // scanf("%c",&ch);
    // if (ch>='a' && ch<='z') {
    //     printf("Letter is LowerCase");
    // } else if (ch>='A' && ch<='Z') {
    //     printf("Letter is UpperCase");
    // } else {
    //     printf("You didn't Entered a Letter");
    // }









// Q6. Write a program to find the biggest number out of 4 numbers entered by user
    // int n1,n2,n3,n4,num;
    // printf("Input Number 1 - ");
    // scanf("%d",&n1);
    // printf("Input Number 2 - ");
    // scanf("%d",&n2);
    // printf("Input Number 3 - ");
    // scanf("%d",&n3);
    // printf("Input Number 4 - ");
    // scanf("%d",&n4);
    // if (n1>=n2 && n1>=n3 && n1>=n4) {
    //     num = n1;
    // } else if (n2>=n1 && n2>=n3 && n2>=n4) {
    //     num = n2;
    // } else if (n3>=n1 && n3>=n2 && n3>=n4) {
    //     num = n3;
    // } else {
    //     num = n4;
    // }
    // printf("The Greatest Number is %d",num);




    return 0;
}