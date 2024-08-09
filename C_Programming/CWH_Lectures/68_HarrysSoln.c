#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <math.h>


char* replaceWord(const char* str, const char* oldWord, const char* newWord) {
    char* resultString;
    int i,count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // Lets count the number of times old word occurs in the string
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i]) {
            count++;
            
            // Jump Over this Word
            i+=(oldWordLength-1);
        }
    }


    // Making a new string to fit in the replaced words

    resultString = (char*) malloc(strlen(str) + (count * (newWordLength - oldWordLength)) + 1);
    
    i = 0;
    while (*str) {
        // Compare the Substring with result
        if (strstr(str, oldWord) == str) {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        } else {
            resultString[i] = *str;
            i++;
            str++;
        }
    }
    resultString[i] = '\0';
    return resultString;
}


int main(){
    FILE* fptr = NULL;
    fptr = fopen("67_Text.txt","r");
    char str[200];
    fgets(str, 200, fptr);
    printf("\nThe Bill Template was -\n%s\n\n",str);
    
    
    char* newStr = str;
    newStr = replaceWord(str,"{{name}}","Harry");
    newStr = replaceWord(newStr,"{{item}}","Fan");
    newStr = replaceWord(newStr,"{{outlet}}","Nothin Fan");
    // replaceWord()
    
    printf("The Generated Bill is -\n%s\n\n",newStr);
    fclose(fptr);

    return 0;
}