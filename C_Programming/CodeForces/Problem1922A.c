#include <stdio.h>
#include <stdlib.h>

int main(){
    int test_cases = 0;
    scanf("%d",&test_cases);
    if (test_cases>=1 && test_cases<=1000)
    {
        int* output = (int*) calloc(test_cases,sizeof(int));
        for (int t = 0; t < test_cases; t++)
        {
            int n;
            scanf("%d",&n);
            char x[3][n+1];
            scanf("%s",&x[0]);
            scanf("%s",&x[1]);
            scanf("%s",&x[2]);
            char temp[n];
            int count = 0;
            int in = 0;
            for (int i = 0; i < n; i++){
                if (((x[0][i]==x[2][i]) && (x[0][i]!=x[1][i])) || ((x[1][i]==x[2][i]) && (x[0][i]!=x[1][i]))){
                    output[t]=0;
                    break;
                }
                // if ((x[0][i]==x[1][i]) && (x[2][i]!=x[1][i])){
                //     output[t]=1;
                //     break;
                // }
                if ((x[0][i]==x[1][i]) && (x[2][i]==x[1][i])){
                    output[t]=0;
                    break;
                }
                if ((x[0][i]==x[1][i]) && (x[2][i]!=x[1][i])){
                    output[t]=1;
                    break;
                }
                output[t]=1;
            }
            // if (count==10){
            //     output[t]=1;
            // } else {
            //     output[t]=0;
            // }

        }
        for (int t = 0; t < test_cases; t++)
        {
            if (output[t]){
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
        free(output);
    } else {
        printf("Test Cases should be between 1 to 1000\n");
    }

    return 0;
}