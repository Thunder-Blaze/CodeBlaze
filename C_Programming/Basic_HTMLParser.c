#include <stdio.h>
#include <string.h>

/*
Make a program to extract "this is a heading"
from <h1> this is a heading </h1>

Input:
<h1> This is a heading </h1>
Output
This is a heading
*/

// My Methord
// Flaws -
// 1: Start and End Tags should be same or at least of same length
// 2: Won't Work with Multiple tags
// 3: Doesn't Removes Whitespaces

// void parser(char string[]){
//     int x = 0;
//     while (string[x]!='>') {
//         x++;
//     };
//     x=x+1; // 1 extra (one for '>' sign)
    
//     for (int i = x; i < strlen(string)-x-1; i++)
//     {
//         printf("%c",string[i]);
//     }

//     printf("\n");
// }

// int main(){
//     char string[] = "<h1>This is a heading</h1>";
//     parser(string);
//     char string2[] = "<span>This is a span</span>";
//     parser(string2);
//     return 0;
// }

// Alternate Methord (This is Better)

void parser(char *string){
    int in=0;
    int index=0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i]=='<') {
            in=1;
            continue;
        } else if (string[i]=='>') {
            in=0;
            continue; // Using this is nessesary else extra '>' will get printed
        }
        if (in==0) {
            string[index]=string[i];
            index++;
        }
    }
    string[index]='\0';

    while (string[0]==' ')
    {
        int j;
        for (j = 0; j < strlen(string); j++)
        {
            string[j]=string[j+1];
        }
        string[j]='\0';   
    }

    while (string[strlen(string)-1]==' ')
    {
        string[strlen(string)-1]='\0';   
    }
    
}

int main(){
    char string[] = "<h1>    <h2>  This is a heading</h2>   </h1>";
    parser(string);
    printf("This is the parsed tag - ~%s~",string);
    return 0;
}