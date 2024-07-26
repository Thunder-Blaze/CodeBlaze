#include <stdio.h>
#include <string.h>

// void printStr(char str[]){
//     int i=0;
//     while (str[i] != '\0')
//     {
//         printf("%c",str[i]);
//         i++;
//     }
// }

// int main(){
    // char str[] = {'B', 'l', 'a', 'z', 'e', '\0'};
    // printStr(str);
    // char strx[52];
    // gets(strx);
    // printf("%s",strx);
    // puts(strx);
    // return 0;
// }



int main(){
    char s1[] = "Lie";
    char s2[] = "April";
    char s3[54];
    // printf("The Length of s1 is - %d\n",strlen(s1));
    // printf("The Length of s2 is - %d\n",strlen(s2));
    // printf("Reverse of s1 is: ");
    // puts(strrev(s1));
    // printf("Reverse of s2 is: ");
    // puts(strrev(s2));

    // Copy into s3 after Addition
    // strcpy(s3,strcat(s1, s2));
    // puts(s3);

    printf("The strcmp for s1 and s2 returned %d\n",strcmp(s1,s2));
    // strcmp returns 0 if first characters are same
    // strcmp returns -1 if first character of string 1st occur before in alphabets
    // strcmp returns 1 if first character of string 2nd occur before in alphabets

    return 0;

}