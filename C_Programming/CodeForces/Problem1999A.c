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
            int sum=0;
            int* a = (int*) calloc(2,sizeof(int));
            int* b = (int*) calloc(2,sizeof(int));
            scanf("%d %d %d %d",&a[0],&a[1],&b[0],&b[1]);
            if (a[0]>b[0] && a[1]>b[0] && a[0]>b[1] && a[1]>b[1])
            {
                sum = 4;
            }
            else if (a[0]<b[0] && a[1]<b[0] && a[0]<b[1] && a[1]<b[1])
            {
                sum = 0;
            }
            else if (a[0]<b[0] && a[1]>b[0] && a[0]<b[1] && a[1]>b[1])
            {
                sum = 0;
            }
            else if (a[0]>b[0] && a[1]<b[0] && a[0]>b[1] && a[1]<b[1])
            {
                sum = 0;
            } 
            else if (a[0]==b[0] && a[1]==b[0] && a[0]==b[1] && a[1]==b[1])
            {
                sum = 0;
            } else {
                sum = 2;
            }
            output[i]=sum;
            free(a);
            free(b);
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