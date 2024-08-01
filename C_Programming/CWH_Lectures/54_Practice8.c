#include <stdio.h>
#include <string.h>





// // Part of Q3
// void stringlen(char* str){
//     int i = 0;
//     do {
//         i++;
//     } while (str[i]!='\0');
//     printf("Length of String is %d",i);
// }





// // Part of Q4
// void slice(char* arr, int m, int n){
//     int l = 0;
//     for (int i = m; i < n; i++) {
//         arr[l]=arr[i];
//         l++;
//     }
//     arr[l]='\0';
// };





// // Part of Q5
// void stringcpy(char* str1,char* str2){
//     int i = 0;
//     int stop=0;
//     do {
//         str1[i]=str2[i];
//         if (str2[i]=='\0') {
//             stop=1;
//         };
//         i++;
//     } while (stop==0);
// }





// // Part of Q8
// void chrcount(char* str,char chr){
//     int count=0;
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i]==chr)
//         {
//             count++;
//         }
//     }
//     printf("The '%c' occurs in String %d times",chr,count);
// }





// // Part of Q9
// void chrpresent(char* str,char chr){
//     int present=0;
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i]==chr)
//         {
//             present=1;
//             break;
//         }
//     }
//     if (present)
//     {
//         printf("The '%c' is Present in String",chr);
//     } else {
//         printf("The '%c' is Absent in String",chr);
//     }
    
// }






int main(){


// Q1. Which of the following is used to appropriately read a multi-word string
//        a. gets()
//        b. puts()
//        c. printf()
//        d. scanf()
//
// Ans - (a) gets()









// Q2. Write a program to take string as an input from the user using %c and %s
//     confirm that the strings are equal
//
    // char al[6];
    // scanf("%s",al);
    // //
    // // // Char Method Not Working for Some Reason
    // //
    // // for (int i = 0; i < 5; i++)
    // // {
    // //     // getchar();
    // //     scanf("%c", &al[i]);
    // //     // fflush(stdin);
    // // }
    // // al[5]='\0';
    // printf("%s", al);
    








// Q3. Write your own version of strlen() from <string.h>
//
    // char str[]="watchanime";
    // stringlen(str);









// Q4. Write a function slice() to slice a string it should change the original
//     string such that it is now sliced string. Take 'm' and 'n' as the start
//     and ending position for slice
//
    // char str[] = "wellloo";
    // printf("%s\n",str);
    // slice(str,3,6); // Works Like Python Slicing
    // printf("%s\n",str);









// Q5. Write your own version of strcpy from <string.h>
//
    // char str[]="watchanime";
    // char cpd[54];
    // stringcpy(cpd,str);
    // printf("%s",cpd);










// Q6. Write a Program to encode a string by adding 1 to the ascii value of its
//     characters
//
    // char str[]="Watch Anime Bruh";
    // printf("The Original String - %s\n",str);
    // for (int i = 0; i < strlen(str); i++)
    // {
    //     // M1 (My Method)
    //     // int n = (((int)str[i]) - 1);
    //     // str[i] = (char)n;

    //     //M2 (Simpler Version)
    //     str[i] = str[i] - 1;
    // }
    // printf("The Encoded String - %s\n",str);









// Q7. Write a Program to decode the encoded string from Q6
//
    // char str[]="V`sbg▼@mhld▼Aqtg";
    // printf("The Encoded String - %s\n",str);
    // for (int i = 0; i < strlen(str); i++)
    // {
    //     // M1 (My Method)
    //     // int n = (((int)str[i]) + 1);
    //     // str[i] = (char)n;

    //     //M2 (Simpler Version)
    //     str[i] = str[i] + 1;
    // }
    // printf("The Original String - %s\n",str);
    








// Q8. Write a Program to count the occurence of a given character in string
//
    // char str[]="HelloWorld";
    // chrcount(str,'k');









// Q9. Write a Program to check if a given character is present in string
// 
//     char str[]="HelloWorld";
//     chrpresent(str,'l');



    return 0;
}