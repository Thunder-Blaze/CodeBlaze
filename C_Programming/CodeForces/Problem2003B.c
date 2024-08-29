#include <stdio.h>
#include <stdlib.h>

int min(int a, int b){
    if (a>b){
        return b;
    }
    return a;
}
int max(int a, int b){
    if (a>b){
        return a;
    }
    return b;
}

int main(){
    int test_cases = 0;
    scanf("%d",&test_cases);
        int* output = (int*) calloc(test_cases,sizeof(int));
        for (int t = 0; t < test_cases; t++)
        {
            int n;
            scanf("%d",&n);
            int arr[n];
            for (int i=0; i<n; i++){
                scanf("%d",&arr[i]);
            }
            int a,b;
            int x = 1;
            int temp = max(arr[0],arr[1]);
            for (int i = 1; i < n-1; i++){
                if(x%2==0){
                    temp = max(temp,arr[i+1]);
                    x++;
                }
                else if(x%2==1){
                    temp = min(temp,arr[i+1]);
                    x++;
                }
            }
            a=temp;
            x = 1;
            temp = max(arr[n-2],arr[n-1]);
            for (int i = 1; i < n-1; i++){
                if(x%2==0){
                    temp = max(arr[n-2-i],temp);
                    x++;
                }
                else if(x%2==1){
                    temp = min(arr[n-2-i],temp);
                    x++;
                }
            }
            b=temp;
            if (n%2==1){
                output[t] = max(a,b);
            } else {
                output[t] = min(a,b);
            }
        }
        for (int t = 0; t < test_cases; t++)
        {
            printf("%d\n",output[t]);
        }
        free(output);

    return 0;
}