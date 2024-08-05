#include <stdio.h>
#include <stdlib.h>

int main(){
    int t = 0;
    scanf("%d",&t);
    if (t>=1 && t<=1000)
    {
        int* output = (int*) calloc(t,sizeof(int));
        for (int i = 0; i < t; i++)
        {
            int n;
            int marks[4];
            scanf("%d",&n);
            char* s = (char*) calloc((4*n),sizeof(char));
            scanf("\n");
            // getchar();
            for (int j = 0; j < (4*n); j++)
            {
                scanf("%c",&s[j]);
            }
            // scanf("%s",&s);
            // printf("%s",s);
            for (int j = 0; j < 4; j++)
            {
                marks[j]=0;
            }
            
            for (int j = 0; j < (4*n); j++)
            {
                if (s[j]=='A') {
                    marks[0]++;
                } else if (s[j]=='B') {
                    marks[1]++;
                } else if (s[j]=='C') {
                    marks[2]++;
                } else if (s[j]=='D') {
                    marks[3]++;
                }
            }
            output[i]=0;
            for (int j = 0; j < 4; j++) {
                if (marks[j]>n) {
                    marks[j]=n;
                }
                output[i]+=marks[j];
            }
            free(s);
            // printf("%d\n",output[i]);
        }
        for (int i = 0; i < t; i++)
        {
            printf("%d\n",output[i]);
        }
        free(output);
    } else {
        printf("Test Cases should be between 1 to 1000\n");
    }
    
    return 0;
}