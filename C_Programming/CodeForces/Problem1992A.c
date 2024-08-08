#include <stdio.h>

int main(){
    int test_cases = 0;
    scanf("%d",&test_cases);
    if (test_cases>=1 && test_cases<=1000)
    {
        int a[test_cases],b[test_cases],c[test_cases];
        int success;
        for (int i=0; i<test_cases ; i++) {
            // int a,b,c;
            scanf("%d %d %d",&a[i],&b[i],&c[i]);
            if (a[i]>=1 && a[i]<=10 && b[i]>=1 && b[i]<=10 && c[i]>=1 && c[i]<=10)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (a[i]<=b[i] && a[i]<=c[i]){
                        a[i]++;
                    } else if (b[i]<=c[i] && b[i]<=a[i]){
                        b[i]++;
                    } else if (c[i]<=b[i] && c[i]<=a[i]){
                        c[i]++;
                    }
                };
                success = 1;
            } else {
                printf("Input of a,b,c should be >= 1 and <= 10");
                success = 0;
            }
        }
        if (success = 1)
        {
            for (int i=0; i<test_cases ; i++) {
                int output = a[i]*b[i]*c[i];
                printf("%d\n",output);
            }
        }
        
    } else {
        printf("Test Cases should be between 1 to 1000\n");
    }
    
    return 0;
}