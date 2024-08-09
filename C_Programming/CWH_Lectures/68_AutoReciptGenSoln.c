#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <math.h>

// Made by Myself

char *replaceword(char* newsent,char* sentence,char wtf[],char wtr[]){
    char word[200];
    strcpy(word,sentence);
    char* find = strstr(word,wtf);
    int k = 0;
    for (int j = 0; j < (strlen(word));)
    {
        while (find!=NULL) {
            // printf("hell");
            if ((word+j)!=find)
            {
                newsent[k]=word[j];
                // printf("%s\n",newsent);
                k++;
                j++;
                continue;
            }
            if ((word+j)==find)
            {
                // printf("Equal\n");
                word[j]='q';
                // printf("%s\n",word);
                j+=strlen(wtf);
                for (int l = 0; l < strlen(wtr); l++)
                {
                    newsent[k]=wtr[l];
                    k++;
                    // printf("%s\n",newsent);
                }
                find = strstr(word,wtf);
                continue;
            }
            // printf("%d",k);
            // char* find = strstr(word,wtf);
        }
        if (find==NULL)
        {
            newsent[k]=word[j];
            // printf("%s\n",newsent);
            k++;
            j++;
        }
        newsent[k]='\0';
        // printf("%s",newsent);
    }
    // return 'a';
    return newsent;
}

int main(){
    FILE *fptr = fopen("67_Text.txt","r");
    char org[162];
    fscanf(fptr,"%[^\n]%*c",org);
    fclose(fptr);
    char* sentence = (char*) malloc(162*sizeof(char));
    strcpy(sentence,org);
    // sentence = "Hellonwell helloxwell welp";
    // char* newWord = malloc(100*sizeof(char));
    // strcpy(newWord,);
    char* modified;
    char newsent[200];
    modified = replaceword(newsent,sentence,"{{name}}","Harry");
    modified = replaceword(newsent,modified,"{{item}}","Fan");
    modified = replaceword(newsent,modified,"{{outlet}}","Nothin Fans");
    printf("%s",modified);
    return 0;
}