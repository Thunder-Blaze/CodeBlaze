#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <math.h>


// This Certainly went bad but I somehow made it work but its not reusable



// You have to fill in values to a template letter.txt
// Letter.txt looks like this
/*
Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
Please Visit our outlet {{outlet}} for any kind of problems. We Plan to serve you again soon.
*/
// You have to read this file and replace these values
//  {{name}} = harry
//  {{item}} = fan
//  {{outlet}} = NothinFan
//
// Use file functions to accomplish this

int main(){
    FILE *fptr = fopen("67_Text.txt","r");
    char org[162];
    fscanf(fptr,"%[^\n]%*c",org);
    fclose(fptr);

    // char org[] = "Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}. Please Visit our outlet {{outlet}} for any kind of problems. We Plan to serve you again soon.";

    // char* a = strstr(org1,"{{name}}");
    // *(a)='\0';
    // char p1[100];
    // strcpy(p1,org1);

    // char p2[6] = "harry"
    
    // a = strstr(org1,"{{item}}");
    // *(a)='\0';
    // char p3[100];
    // strcpy(p3,org1);

    // printf("%s",p2);


    int in=0;
    int k=0;
    char words[4][11] = {"Harry","Fan","Nothin Fan","Nothin Fan"};
    int word=0;
    char *new = (char*) malloc(1024*sizeof(char));
    for (int i = 0; i < strlen(org); i++)
    {
        if (i!=(strlen(org)-1)) {
            if ((org[i]=='{')&&(org[i+1]=='{')) {
                in = word+1;
                continue;
            }
        }
        if (i!=0) {
            if ((org[i-1]=='}')&&(org[i]=='}')) {
                in = 0;
                continue;
            }
        }
        if (in==0){
            new[k]=org[i];
            k++;
        }
        for (int n = 0; n < 4; n++)
        {
            if ((in==n+1) && (word==n)) {
                for (int j = 0; j < strlen(words[n]); j++)
                {
                    new[k]=words[n][j];
                    k++;
                }
                word++;
            }
        }
    }
    
    printf("%s",new);


    return 0;
}