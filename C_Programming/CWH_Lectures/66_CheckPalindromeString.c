#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <math.h>


int main(){
    char* str = (char*) malloc(1024*sizeof(char));
    scanf("%s",str);
    str = (char*) realloc(str,(sizeof(char)*(strlen(str)+1)));
    // printf("%s",str);
    char *revs = (char*) malloc(sizeof(char)*(strlen(str)+1));
    strcpy(revs,strrev(str));
    strrev(str);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]==revs[i])
        {
            count++;
        }
        
    }
    
    if (count==strlen(str)) {
        printf("The String is Palindrome");
    } else {
        printf("The String is not a Palindrome");
    }

    free(str);
    free(revs);
    
    return 0;
}