#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>

int main(){
    // FILE * ptr = NULL;
    // ptr = fopen("67_Text.txt","r");
    
    // // Reads the First Character
    // char c = fgetc(ptr);
    // printf("The Character I read was %c\n", c);
    
    // // Reads the next character and so on
    // c = fgetc(ptr);
    // printf("The Character I read was %c\n", c);

    // char str[4];
    // fgets(str, 4, ptr);
    // printf("The String is %s", str);

    // fclose(ptr);
    
    
    
    FILE * ptr2 = NULL;
    ptr2 = fopen("67_Text2.txt","w");
    
    // File gets cleared and then something is written

    // Writes character one by one
    fputc('o', ptr2);
    fputc('h', ptr2);
    fputc(',', ptr2);
    // Writes a string
    fputs(" This \nis ME", ptr2);

    fclose(ptr2);
    return 0;

    // In r+ mode the file doesn't get cleared else the content is overwritten one by one
    // In w+ mode file is cleared
    // In a+ mode file is not cleared and new data gets appended int the
    // end of the old data
}