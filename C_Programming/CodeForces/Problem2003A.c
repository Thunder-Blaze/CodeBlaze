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
            char str[n+1];
            scanf("%s",&str);
            if (str[0]==str[n-1]){
                output[t]=0;
            } else {
                output[t]=1;
            }
        }
        for (int t = 0; t < test_cases; t++)
        {
            if (output[t]==1){
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