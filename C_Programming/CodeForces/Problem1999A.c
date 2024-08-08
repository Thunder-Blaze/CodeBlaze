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
            int num;
            scanf("%d",&num);
            int sum=0;
            while (num)
            {
                sum+=(num%10);
                num/=10;
            }
            output[i]=sum;
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