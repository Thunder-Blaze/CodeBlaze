#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>

int main(){
    FILE *fptr = NULL;
    // FILE *fptr2 = NULL;
    char s[100];


    // Opening File
    // Available modes are "r" - read, "w" - write, "a" - append, 
    //                     "r+" - read & append
    fptr = fopen("64_File.txt","r+");
    // fptr2 = fopen("E:\\Coding\\C_Programming\\CWH_Lectures\\64_File2.bin","rb");


    // // Reading File
    // fscanf(fptr,"%[^\n]%*c",s);
    // printf("%s",s);


    // // Writing File
    // fprintf(fptr,"%s",s);


    // // Closing File
    // fclose(fptr);
    // // fclose(fptr2);
    return 0;
}