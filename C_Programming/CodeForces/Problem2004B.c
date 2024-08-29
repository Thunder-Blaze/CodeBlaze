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
            output[t]=0;
            int l=0,r=0,L=0,R=0;
            scanf("%d %d %d %d",&l,&r,&L,&R);
            // scanf("",L,R); 
            if ((l==L)&&(r==R)){
                output[t]=R-L;
                continue;
            }
        }
        for (int t = 0; t < test_cases; t++)
        {
            printf("%d\n",output[t]);
        }
        free(output);
    } else {
        printf("Test Cases should be between 1 to 1000\n");
    }

    return 0;
}